#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "hardware/spi.h"
#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "lib/display.hpp"
#include "launcer.hpp"
#include "jerryscript.h"
#include <pfs.h>
#include "lfs.h"
#include "lib/serial_api.hpp"

#define ROOT_SIZE 0x100000
#define ROOT_OFFSET 0x100000

// SPI Defines
// We are going to use SPI 0, and allocate it to the following GPIO pins
// Pins can be changed, see the GPIO function select table in the datasheet for information on GPIO assignments
#define SPI_PORT spi0
#define PIN_MISO 16
#define PIN_CS   17
#define PIN_SCK  18
#define PIN_MOSI 19

// Display
pimoroni::UC8151 uc8151(296, 128, pimoroni::ROTATE_0);
pimoroni::PicoGraphics_Pen1BitY graphics(uc8151.width, uc8151.height, nullptr);

void init_fs() {
    struct pfs_pfs *pfs;
    struct lfs_config cfg;
    printf("Mounting FS\n");
    ffs_pico_createcfg (&cfg, ROOT_OFFSET, ROOT_SIZE);
    printf("FS: created config\n");
    pfs = pfs_ffs_create (&cfg);
    printf("FS: fs created\n");
    pfs_mount (pfs, "/");
    printf("Mounted FS\n");
}

void core2_main() {
    init_fs();
    while (1) {
        handle_serial();
    }   
}

int main() {
    stdio_init_all();
    // Init JS runtime
    jerry_init (JERRY_INIT_EMPTY);
    // Init display
    spi_init(SPI_PORT, 1000*1000);
    gpio_set_function(PIN_MISO, GPIO_FUNC_SPI);
    gpio_set_function(PIN_CS,   GPIO_FUNC_SIO);
    gpio_set_function(PIN_SCK,  GPIO_FUNC_SPI);
    gpio_set_function(PIN_MOSI, GPIO_FUNC_SPI);
    gpio_set_dir(PIN_CS, GPIO_OUT);
    gpio_put(PIN_CS, 1);
    // Do display init graphic
    init_display(uc8151, graphics);
    // Init file system
    init_fs();
    // Load launcher
    Launcher::launcher_init(uc8151, graphics);
    // Launch core 2 for serial output
    multicore_launch_core1(core2_main);
    while (true) {
        // Loop to stop the microcontroller stopping, implement actual logic here
    }
}
