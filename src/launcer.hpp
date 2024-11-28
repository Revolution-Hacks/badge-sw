#pragma once
#include "pico_graphics.hpp"
#include "uc8151.hpp"

namespace Launcher {
    void launcher_init(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics);
    void init_display(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics);
}