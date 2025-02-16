#include <stdio.h>

int main() {
    int x = 10;
    if (x > 5) {
        printf("x is greater than 5\n");
    } else {
        printf("x is not greater than 5\n");
    }

    return 0;

    // Unreachable code (compiler will likely warn about this)
    printf("This will never be printed.\n"); 
}