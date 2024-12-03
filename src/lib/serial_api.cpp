#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "pico/stdlib.h"
#include "pfs.h"

enum INSTRUCTION_TYPE {
    NOT_SET = -1,
    CREATE = 48, // ASCII 0
    DELETE = 1
};

void handle_serial() {
    printf("cmd_ready");
    int ch = getchar(); // Read a character from stdin
    printf("%d\n", ch);
    if (ch != EOF) {
        printf("ready\n");
        char file_name[20] = {0}; // Initialize buffer with zeros
        int pos = 0; // Position in buffer
        
        while (pos < sizeof(file_name) - 1) { // Leave space for null terminator
            int letter = getchar();
            if (letter == ' ' || letter == '\n' || letter == EOF) {
                break;
            }
            file_name[pos] = static_cast<char>(letter);
            printf("letter: %d", file_name[pos]);
        }
        file_name[pos] = '\0';
        std::string file_name_str = std::string(file_name) + ".js";
        printf("File name %d", file_name_str);
        FILE *file = fopen(file_name_str.c_str(), "w");
        if (file != nullptr) {
            fprintf(file, "test1234");
            fclose(file);
        } else {
            printf("Failed to open file\n");
        }
    }
}