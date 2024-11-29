#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "lib/display.hpp"
#include "launcer.hpp"


// SPI Defines
// We are going to use SPI 0, and allocate it to the following GPIO pins
// Pins can be changed, see the GPIO function select table in the datasheet for information on GPIO assignments
#define SPI_PORT spi0
#define PIN_MISO 16
#define PIN_CS   17
#define PIN_SCK  18
#define PIN_MOSI 19

pimoroni::UC8151 uc8151(296, 128, pimoroni::ROTATE_0);
pimoroni::PicoGraphics_Pen1BitY graphics(uc8151.width, uc8151.height, nullptr);

int main()
{
    stdio_init_all();
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

    // Init engine
/*     engine_init();
    const jerry_char_t script[] = "var str = 'Hello, World!';";
    const jerry_length_t script_size = sizeof (script) - 1;
    jerry_value_t eval_ret = jerry_eval (script,
                                       script_size,
                                        JERRY_PARSE_NO_OPTS);

    /* Check if there was any error (syntax or runtime) */
    // bool run_ok = !jerry_value_is_exception (eval_ret);

    /* Parsed source code must be freed */
    // jerry_value_free (eval_ret);
    // Load launcher
    Launcher::launcher_init(uc8151, graphics);
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
