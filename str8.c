#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tolower(str[j]) > tolower(str[j + 1])) { // Case-insensitive comparison
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to handle spaces
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    sortString(str);
    printf("Sorted string: %s\n", str);
    return 0;
}