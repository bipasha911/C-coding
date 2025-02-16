#include <stdio.h>

void bool_to_string(int boolean_value, char* str) {
    if (boolean_value) {
        strcpy(str, "true");  // Or "1"
    } else {
        strcpy(str, "false"); // Or "0"
    }
}

int main() {
    int my_bool = 1; // True
    char str_val[6]; // Enough space for "true" + null terminator

    bool_to_string(my_bool, str_val);
    printf("String value: %s\n", str_val); // Output: String value: true

    my_bool = 0; // False
    bool_to_string(my_bool, str_val);
    printf("String value: %s\n", str_val); // Output: String value: false

    return 0;
}