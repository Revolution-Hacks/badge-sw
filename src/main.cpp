#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "src/images/Revolution-logo.h"


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

    int bytes_per_row = (uc8151.width + 7) / 8;  // Round up division
    for (int y = 0; y < uc8151.height; y++) {
        for (int x = 0; x < uc8151.width; x++) {
        int byte_index = y * bytes_per_row + (x / 8);
        int bit_index = 7 - (x % 8);  // MSB first, matching Python converter

        // Get the bit value and invert it (0xFF in data means white)
        uint8_t byte = revolution_logo_data[byte_index];
        bool pixel_on = (byte & (1 << bit_index)) == 0;
        
        // 1 = black, 0 = white for the display
        graphics.set_pen(pixel_on ? 1 : 0);
        graphics.set_pixel(pimoroni::Point(x,y));
        }
    }
    uc8151.update(&graphics);
    sleep_ms(3000);
    graphics.clear();
    uc8151.update(&graphics);

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
