#include <stdio.h>

int main() {
    int decimal_val = 511;
    char octal_str[20];

    snprintf(octal_str, sizeof(octal_str), "%o", decimal_val); // %o for octal

    printf("Octal value: %s\n", octal_str); // Output: Octal value: 777

    return 0;
}