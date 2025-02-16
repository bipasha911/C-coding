#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    bool isFirstLetter = true; // Flag to track the start of a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && isFirstLetter) {
            printf("%c", str[i]);
            isFirstLetter = false;
        } else if (isspace(str[i])) {
            isFirstLetter = true; // Reset for the next word
        }
    }
    printf("\n");
    return 0;
}