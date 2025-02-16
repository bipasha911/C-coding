#include <stdio.h>
#include <string.h>

void reverseStringRecursive(char* str, int start, int end) {
    if (start >= end) {
        return; // Base case: nothing left to swap
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseStringRecursive(str, start + 1, end - 1); // Recursive call
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseStringRecursive(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}