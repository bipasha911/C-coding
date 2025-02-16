#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPangram(char str[]) {
    bool alphabet[26] = {false};
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            alphabet[ch - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }
    return 0;
}