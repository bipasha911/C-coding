#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int n = strlen(str);
    int i = 0;

    // Find the first non-zero character
    while (i < n -1 && str[i] == '0') {
        i++;
    }

    // Shift the string to remove leading zeros
    if (i > 0) {
        strcpy(str, str + i);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  // No fgets needed here, we don't expect spaces

    removeLeadingZeros(str);
    printf("String after removing leading zeros: %s\n", str);
    return 0;
}
