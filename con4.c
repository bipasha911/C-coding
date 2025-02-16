#include <stdio.h>
#include <stdlib.h>

int main() {
    char str_val[] = "1234567890";
    long long_val = strtol(str_val, NULL, 10); // 10 for decimal

    printf("Long value: %ld\n", long_val); // Output: Long value: 1234567890

    return 0;
}