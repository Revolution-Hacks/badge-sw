#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"

int INSTRUCTION = -1; // -1 for not set, 0 for create, 1 for delete
enum INSTRUCTION_TYPE {
    NOT_SET = -1,
    CREATE = 0,
    DELETE = 1
};

void handle_serial() {
    char buffer[128]; // Buffer to store user input
    printf("Instruction: ");
    // Prompt user for the instruction
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error reading input\n");
        return;
    }

    // Strip newline characters
    buffer[strcspn(buffer, "\r\n")] = '\0';
    if (INSTRUCTION == CREATE) {
        char name[100];

        // Prompt user for the file name
        printf("Enter name: ");
        if (fgets(name, sizeof(name), stdin) == NULL) {
            printf("Error reading input\n");
            return;
        }

        // Remove the newline character from the input
        name[strcspn(name, "\n")] = '\0';

        printf("data_send: %s\n", name); // Process the name
    } else if (INSTRUCTION == DELETE) {
        printf("Deleting file system\n");
    } else {
        printf("Invalid instruction\n");
    }
}
