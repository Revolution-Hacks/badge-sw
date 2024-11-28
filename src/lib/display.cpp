#include <stdio.h>
#include "pico/stdlib.h"
#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "src/assets/Revolution-logo.h"


void init_display(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics) {
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
    graphics.clear();
    sleep_ms(3000);
}