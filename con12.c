#include <stdio.h>

void decimal_to_binary(int decimal_val) {
    if (decimal_val > 0) {
        decimal_to_binary(decimal_val / 2);
        printf("%d", decimal_val % 2);
    }
}

int main() {
    int decimal_val = 25;

    printf("Binary value: ");
    decimal_to_binary(decimal_val); // Output: Binary value: 11001
    printf("\n");

    return 0;
}