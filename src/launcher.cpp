#include "pico_graphics.hpp"
#include "uc8151.hpp"
#include "lib/fs.hpp"
#include "pfs.h"
#include "dirent.h"

namespace Launcher {
    void launcher_draw_box(pimoroni::PicoGraphics_Pen1BitY graphics, std::string title, std::int32_t x) {
        graphics.text(title, pimoroni::Point(x, 50), 10, 2);
    }
    void init_display(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics) {
        graphics.set_pen(15);
        graphics.clear();
        graphics.set_pen(0);
        pimoroni::Rect bg(296, 128, 296, 128);
        graphics.rectangle(bg);
        // Do Text in corner
        //graphics.set_font(&DMSANS_SEMIBOLD_75_bitmap);
        graphics.text("Revolution 2024", pimoroni::Point(5, 1), 10, 2);
/*         FILE *file = fopen("test.js", "w");
        if (file != nullptr) {
            fprintf(file, "test1234");
            fclose(file);
        } else {
            printf("Failed to open file\n");
        } */
        auto files = FileList::list_js_files("/");
        for (auto file : files.files) {
            printf("File: %s\n", file.c_str());
        }
        // Loop through launcher items
        // Draw each item
        Launcher::launcher_draw_box(graphics, "BIO", 25);
        Launcher::launcher_draw_box(graphics, "Schedule", 100);
        Launcher::launcher_draw_box(graphics, "Settings", 200);
        uc8151.update(&graphics);
    };


    void launcher_init(pimoroni::UC8151 uc8151, pimoroni::PicoGraphics_Pen1BitY graphics) {
        Launcher::init_display(uc8151, graphics);
    }
}