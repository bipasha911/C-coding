#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary_str[] = "11001";
    int decimal_val = strtol(binary_str, NULL, 2); // 2 for binary

    printf("Decimal value: %d\n", decimal_val); // Output: Decimal value: 25

    return 0;
}