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
int INSTRUCTION = NOT_SET;

std::string handle_longer_input(int buffer_length) {
    char data[buffer_length] = {0};
    int pos = 0;
    while (pos < sizeof(data) - 1) {
        int letter = getchar();
        if (letter == '#' || letter == '\n' || letter == EOF) {
            printf("Breaking character loop!\n");
             break;
        }
        data[pos] = static_cast<char>(letter);
        pos++;
        sleep_ms(20);
    }
    data[pos] = '\0';
    std::string data_str(data);
    return data_str.c_str();
}

void handle_serial() {
    printf("cmd_ready");
    int ch = getchar();
    printf("%d\n", ch);
    if (ch != EOF && ch == CREATE) {
        printf("ready\n");
        std::string file_name_str = handle_longer_input(20);
        printf("data_send\n");
        std::string data_str = handle_longer_input(100);
        printf("Data received: %s\n", data_str.c_str());
        FILE *file = fopen(file_name_str.c_str(), "w");
        if (file != nullptr) {
            fprintf(file, data_str.c_str());
            fclose(file);
            printf("File created successfully\n");
        } else {
            printf("Failed to open file\n");
        }
    } else {
        printf("Invalid command or EOF encountered\n");
    }
}