#pragma once

#include "bitmap_fonts.hpp"

const bitmap::font_t DMSANS_SEMIBOLD_75_bitmap {
  .height = 16,
  .max_width = 9,
  .widths = {
    0,4,4,1,6,3,5,8,8,8,4,4,5,7,4,3,
    6,3,4,4,2,5,7,4,5,8,4,6,5,7,5,3,
    2,8,7,8,4,2,2,3,2,1,8,1,1,7,4,4,
    6,4,6,6,8,1,2,7,4,4,3,2,3,2,4,1,
    1,2,8,5,8,5,7,6,4,4,2,4,1,4,4,6,
    8,8,7,1,2,4,7,2,7,2,6,8,1,8,5,
  },
  .data = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
    0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
    0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,
0x00,0x00,0x00,0x08,0x0C,0x0E,0x0E,0x0F,
    0x0F,0x0E,0x0E,0x0C,0x08,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,
    0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x30,
0x38,0x3C,0x3C,0x3C,0x3E,0x3E,0x3E,0x3E,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x20,0x30,0x38,0x3C,
    0x3E,0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x3F,0x3F,0x3F,0x3F,0x3E,0x3E,0x3C,
    0x38,0x30,0x20,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x06,
    0x06,0x06,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x06,0x06,0x04,0x04,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x08,0x10,0x10,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x10,0x18,0x1C,0x1F,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFE,0x7E,0x7E,0x7E,0x7E,0x7E,
0x7E,0xFF,0xFF,0xFE,0xFC,0xF8,0xF0,0xF0,
    0xE0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0xC0,0xE0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF,
    0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xC0,0xE0,0xE0,0xE0,
    0xF0,0xF0,0xF8,0xF8,0xF8,0xFC,0xFC,0xFC,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,
    0xFE,0xFE,0xFC,0xFC,0xFC,0xF8,0xF8,0xF8,
0xF0,0xF0,0xF0,0xE0,0xE0,0xC0,0x80,0x80,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0C,
    0x0E,0x0E,0x0F,0x0C,0x00,0x00,0x00,0x00,
0x00,0x00,0x0E,0x0F,0x0E,0x0C,0x0C,0x08,
    0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,
0x1F,0x1E,0x1E,0x1E,0x1C,0x1C,0x18,0x18,
    0x18,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x08,0x0C,0x0E,0x0E,0x0F,0x0F,0x0E,
    0x0E,0x0C,0x08,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x06,0x06,0x06,0x06,
    0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x20,0x30,0x30,0x38,0x38,
0x3C,0x3C,0x3C,0x3E,0x3E,0x3E,0x3E,0x3E,
    0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x3F,0x3F,0x3F,0x3E,0x3E,0x3E,0x3E,
    0x3C,0x3C,0x3C,0x38,0x38,0x30,0x30,0x20,
0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x07,0x07,0x07,0x07,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0C,
    0x0C,0x0C,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0C,0x0C,0x0C,0x08,0x08,0x08,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,
    0x00,0x08,0x08,0x0C,0x0C,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0E,0x0C,0x0C,0x0C,0x08,0x08,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
0x0C,0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,
0x0E,0x0C,0x08,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x10,0x18,0x1C,0x1C,
    0x1E,0x1E,0x1E,0x1F,0x1F,0x1F,0x1F,0x1F,
0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1E,
    0x1E,0x1E,0x1C,0x1C,0x18,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x40,0x60,0x70,0x78,0x78,0x7C,0x7C,0x7C,
0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x60,0x70,0x70,0x78,0x7C,
0x7C,0x7E,0x7E,0x7E,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x7E,0x7E,0x7E,0x7C,
0x7C,0x78,0x78,0x70,0x60,0x40,0x00,0x00,
    0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0E,0x0E,0x0E,0x0C,0x0C,0x08,0x08,
    0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x10,0x18,0x1C,0x1C,
    0x1C,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,
0x1C,0x1C,0x18,0x18,0x10,0x00,0x00,0x00,
    0x00,0x00,0x10,0x18,0x18,0x1C,0x1E,0x1E,
0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
    0x1F,0x1F,0x1E,0x1E,0x1E,0x1C,0x18,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF0,0xF8,
0xF8,0xF8,0xFC,0xFC,0xFC,0xFE,0xFE,0xFE,
    0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
    0xFC,0xFC,0xFC,0xFC,0xF8,0xF8,0xF8,0xF0,
0xF0,0xE0,0xE0,0xC0,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x08,0x0C,0x0E,0x0E,0x0F,
0x0F,0x0E,0x0E,0x0C,0x08,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
    0x0C,0x0E,0x0E,0x0F,0x0F,0x0E,0x0E,0x0C,
0x08,0x3C,0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,
    0x3F,0x3E,0x3C,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3E,
0x3C,0x3C,0x38,0x38,0x38,0x30,0x30,0x30,
    0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x1C,0x18,0x10,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x18,
0x1C,0x1F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
    0x18,0x1C,0x1E,0x1F,0x1C,0x18,0x10,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x06,0x06,0x06,0x07,
    0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x06,
0x06,0x06,0x04,0x04,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x02,0x02,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xE0,
    0xE0,0xE0,0xF0,0xF0,0xF0,0xF8,0xF8,0xFC,
0xFC,0xFC,0xFE,0xFE,0xFE,0xFF,0xFF,0x00,
    0x00,0x00,0x00,0x60,0x70,0x70,0x78,0x7C,
0x7C,0x7C,0x7C,0x7E,0x7E,0x7E,0x7E,0x7C,
    0x7C,0x7C,0x7C,0x78,0x70,0x60,0x40,0x00,
0x00,0x00,0x40,0x60,0x70,0x78,0x7C,0x7C,
    0x7E,0x7E,0x7E,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7E,0x7E,0x7E,0x7C,0x7C,0x78,0x70,
    0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0xFC,0xFE,
    0xFE,0xFE,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFC,
    0xF8,0xF8,0xF0,0xE0,0xC0,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0C,
0x0C,0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
    0x0C,0x0C,0x08,0x08,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x00,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,
0xFC,0xF8,0xF8,0xE0,0xC0,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
    0x08,0x0C,0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,
0x0C,0x0C,0x0C,0x08,0x08,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x38,
    0x38,0x3C,0x3C,0x3E,0x3E,0x3E,0x3F,0x3F,
0x3F,0x3F,0x3F,0x3F,0x3F,0x3E,0x3E,0x3E,
    0x3C,0x3C,0x38,0x38,0x30,0x20,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0x08,0x0C,0x0C,0x0E,0x0E,
    0x0E,0x0E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0E,0x0E,0x0E,0x0C,0x0C,0x0C,0x08,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x08,0x0C,0x00,0x00,0x00,0x00,0x00,
    0x20,0x30,0x38,0x3C,0x3C,0x3E,0x3E,0x3E,
0x3E,0x3E,0x3F,0x3F,0x3F,0x3E,0x3E,0x3E,
    0x3E,0x3C,0x3C,0x38,0x38,0x30,0x20,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x30,
0x30,0x38,0x38,0x3C,0x3C,0x3E,0x3E,0x3F,
    0x00,0x00,0x00,0x00,0x20,0x30,0x30,0x38,
0x3C,0x3C,0x3C,0x3E,0x3E,0x3E,0x3E,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x20,0x30,0x38,0x3C,0x3E,
    0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x3F,0x3F,0x3F,0x3E,0x3E,0x3C,0x38,
    0x30,0x20,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x03,0x02,0x02,0x02,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,
0x7F,0x7F,0x7E,0x7E,0x7E,0x7C,0x7C,0x7C,
    0x7C,0x78,0x78,0x78,0x78,0x70,0x70,0x70,
0x60,0x60,0x60,0x60,0x40,0x40,0x40,0x40,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0x0E,0x0E,0x0C,0x0C,
    0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0x08,0x0C,0x0E,0x0E,0x0F,
    0x0F,0x0F,0x0E,0x0E,0x0C,0x0C,0x08,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x06,0x04,0x04,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x06,
    0x06,0x06,0x06,0x07,0x07,0x07,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
    0x08,0x0C,0x0C,0x0E,0x0E,0x0F,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
    0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xF8,0xFC,
0xFC,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,
0xFE,0xFC,0xFC,0xF8,0xF8,0xF0,0xE0,0xC0,
    0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x10,0x18,0x1C,0x1C,0x1E,
    0x1E,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,
    0x1F,0x1E,0x1E,0x1E,0x1C,0x18,0x18,0x10,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x18,0x18,0x1C,0x1C,0x1E,
    0x1E,0x1E,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
    0x1E,0x1C,0x1C,0x18,0x18,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7F,0x7F,0x7F,0x7F,
    0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x00,0x00,0x00,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,
0x30,0x30,0x38,0x38,0x38,0x38,0x38,0x38,
    0x38,0x30,0x30,0x20,0x20,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,
    0x0C,0x0C,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x08,0x0C,0x0E,0x0E,0x0F,0x0F,0x0E,0x0E,
0x0C,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
    0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
    0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
    0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x02,
0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,
0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
    0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
    0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
    0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
    0x08,0x0C,0x0F,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x0C,
    0x0C,0x0C,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0C,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x30,
    0x38,0x3C,0x3C,0x3C,0x3E,0x3E,0x3E,0x3E,
0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,0x3E,0x3E,
    0x3E,0x3E,0x3C,0x3C,0x3C,0x38,0x38,0x30,
0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,
0xF8,0xFC,0xFC,0xFE,0xFE,0xFE,0xFE,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0xFE,0xFE,0xFE,0xFC,0xFC,0xF8,0xF8,0xF0,
    0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,
    0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x00,0x7F,0x7F,0x7E,
0x7E,0x7E,0x7C,0x7C,0x78,0x78,0x78,0x70,
    0x70,0x70,0x60,0x60,0x40,0x40,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x02,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x7F,0x7E,0x7C,0x78,0x78,0x70,0x60,
0x60,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,
    0x60,0x70,0x78,0x78,0x7C,0x7E,0x7F,0x03,
0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3E,
    0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3C,
0x38,0x30,0x20,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,
    0x3F,0x3F,0x3F,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
    0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
    0x00,0x00,0x80,0x80,0x80,0xC0,0xC0,0xC0,
0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x80,0x80,
    0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0xC0,0xE0,0xF8,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xC0,0x80,
0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,
0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x80,
    0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,
0x1E,0x1E,0x1E,0x1C,0x1C,0x18,0x18,0x10,
    0x00,0x00,0x00,0x00,0x00,0x00,
  }
};
