#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char time_str[6]; // HH:MM format
    printf("Enter time in HH:MM format (with '_' for unknown digits): ");
    scanf("%5s", time_str); // Limit input to 5 characters

    for (int i = 0; i < 5; i++) {
        if (time_str[i] == '_') {
            if (i == 0) time_str[i] = '2'; // Maximize hours
            else if (i == 1) time_str[i] = '3';
            else if (i == 3) time_str[i] = '5'; // Maximize minutes
            else if (i == 4) time_str[i] = '9';
        }
    }

    printf("Maximized time: %s\n", time_str);

    return 0;
}