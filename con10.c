#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex_str[] = "1FF";
    int decimal_val = strtol(hex_str, NULL, 16); // 16 for hexadecimal

    printf("Decimal value: %d\n", decimal_val); // Output: Decimal value: 511

    return 0;
}