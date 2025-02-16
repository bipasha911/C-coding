#include <stdio.h>
#include <string.h>

char firstNonRepeating(char* str) {
    int char_counts[256] = {0}; // Initialize counts for all ASCII characters

    for (int i = 0; str[i] != '\0'; i++) {
        char_counts[(int)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (char_counts[(int)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // No non-repeating character found
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstNonRepeating(str);

    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}