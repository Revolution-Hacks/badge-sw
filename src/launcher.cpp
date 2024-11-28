#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "assets/DM-SemiBold-75.hpp"

namespace Launcher {
    void launcher_draw_box(pimoroni::PicoGraphics_Pen1BitY graphics, std::string title, bool active) {
        //
        if (active) {
            pimoroni::Rect bg(50, 40, 75, 25);
            bg.inflate(1);
            graphics.set_pen(1);
            graphics.rectangle(bg);
            bg.deflate(1);
            graphics.set_pen(0);
            graphics.rectangle(bg);
        }
        graphics.text(title, pimoroni::Point(50, 50), 10, 2);
    }
    void init_display(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics) {
        graphics.set_pen(15);
        graphics.clear();
        graphics.set_pen(0);
        pimoroni::Rect bg(296, 128, 296, 128);
        graphics.rectangle(bg);
        // Do Text in corner
        //graphics.set_font(&DMSANS_SEMIBOLD_75_bitmap);
        graphics.text("Revolution", pimoroni::Point(5, 1), 10, 2);

        // Loop through launcher items
        // Draw each item
        Launcher::launcher_draw_box(graphics, "Settings", true);
        uc8151.update(&graphics);
    };


    void launcher_init(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics) {
        Launcher::init_display(uc8151, graphics);
    }
}