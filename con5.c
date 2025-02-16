#include <stdio.h>

int main() {
    long my_long = 9876543210L;
    char str_val[20]; // Adjust size as needed

    snprintf(str_val, sizeof(str_val), "%ld", my_long);

    printf("String value: %s\n", str_val); // Output: String value: 9876543210

    return 0;
}