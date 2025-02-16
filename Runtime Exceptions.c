#include <stdio.h>
#include <stdlib.h>

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        fprintf(stderr, "Error: Division by zero!\n"); // Print error message to stderr
        return -1; // Indicate an error (you could also use a special value like INT_MIN)
    }
    return numerator / denominator;
}

int main() {
    int result = divide(10, 2);
    if (result == -1) {
        return 1; // Indicate failure to the operating system
    }
    printf("Result: %d\n", result);

    result = divide(10, 0); // This will cause the error message to be printed
    if (result == -1) {
        return 1; // Handle the error in main
    }
    printf("Result: %d\n", result); // This line won't be reached

    return 0; // Return 0 to indicate success
}