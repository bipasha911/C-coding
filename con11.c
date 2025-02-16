#include <stdio.h>

int main() {
    int decimal_val = 511;
    char hex_str[20];

    snprintf(hex_str, sizeof(hex_str), "%X", decimal_val); // %X or %x for hexadecimal

    printf("Hexadecimal value: %s\n", hex_str); // Output: Hexadecimal value: 1FF

    return 0;
}