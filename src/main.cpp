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

    // Initialize display
    int bytes_per_row = (uc8151.width + 7) / 8;

    // Clear display buffer first
    graphics.clear();

    // Render image using the provided algorithm
    uint8_t* buffer = new uint8_t[(296 * 128) / 8];
    uint8_t* ptr = buffer;

    for (uint32_t x = 0; x < 296; ++x) {
        uint32_t bm = 0b10000000 >> (x & 0b111);
        
        for (uint32_t y = 0; y < 128; y += 8) {
            uint8_t val = 0;
            for (uint32_t cy = 0; cy < 8; ++cy) {
                uint32_t o = ((y + cy) * (296 >> 3)) + (x >> 3);
                if (revolution_logo_data[o] & bm) {
                    val |= 0b10000000 >> cy;
                }
            }
            *ptr++ = val;
        }
    }

    // Convert buffer to display pixels
    for (int y = 0; y < uc8151.height; y++) {
        for (int x = 0; x < uc8151.width; x++) {
            int byte_index = (y >> 3) * uc8151.width + x;
            int bit_index = y & 0b111;
            bool pixel_on = (buffer[byte_index] >> bit_index) & 0x01;
            graphics.set_pen(pixel_on);
            graphics.set_pixel(pimoroni::Point(x,y));
        }
    }

    delete[] buffer;
    uc8151.update(&graphics);
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
