#include <stdio.h>

int main() {
    double my_double = 3.141592653589793;
    char str_val[30]; // Adjust size as needed

    snprintf(str_val, sizeof(str_val), "%lf", my_double); // %lf for double

    printf("String value: %s\n", str_val); // Output: String value: 3.141593

    return 0;
}