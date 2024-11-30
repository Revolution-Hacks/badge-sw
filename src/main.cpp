#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "lib/display.hpp"
#include "launcer.hpp"
#include "jerryscript.h"
#include "lib/fs.h"
#include "lfs.h"


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

// FS
lfs_t lfs;

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

    graphics.set_pen(15);
    graphics.clear();
    graphics.set_pen(0);
    pimoroni::Rect bg(296, 128, 296, 128);
    graphics.rectangle(bg);

    int mount_err = lfs_mount(&lfs, &fs_cfg);
    if (mount_err) {
        printf("Error mounting filesystem\n");
        char err_str[10];
        snprintf(err_str, sizeof(err_str), "%d", mount_err);
        graphics.text(err_str, pimoroni::Point(10, 5), 2);
        uc8151.update(&graphics);
        int format_err = lfs_format(&lfs, &fs_cfg);
        if (format_err) {
             printf("Error formatting filesystem\n");
            char err_str[10];
            snprintf(err_str, sizeof(err_str), "%d", format_err);
            graphics.text(err_str, pimoroni::Point(10, 7), 2);
            uc8151.update(&graphics);
        }
        graphics.text("FS formatted", pimoroni::Point(10, 10), 2);
        uc8151.update(&graphics);
        lfs_mount(&lfs, &fs_cfg);
    }
    graphics.text("FS mounted", pimoroni::Point(10, 10), 2);
    uc8151.update(&graphics);
    sleep_ms(2000);
    // Load launcher
    Launcher::launcher_init(uc8151, graphics);
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
