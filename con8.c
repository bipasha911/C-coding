#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal_str[] = "777";
    int decimal_val = strtol(octal_str, NULL, 8); // 8 for octal

    printf("Decimal value: %d\n", decimal_val); // Output: Decimal value: 511

    return 0;
}