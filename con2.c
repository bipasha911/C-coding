#include <stdio.h>

int main() {
    float my_float = 3.14159f;
    char str_val[20]; // Adjust size as needed

    snprintf(str_val, sizeof(str_val), "%f", my_float); // Use snprintf for safety

    printf("String value: %s\n", str_val); // Output: String value: 3.141590

    return 0;
}