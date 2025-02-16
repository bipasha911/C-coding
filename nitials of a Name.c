#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove trailing newline

    printf("Initials: ");
    char *token = strtok(name, " ");
    while (token != NULL) {
        printf("%c.", toupper(token[0])); // Print initial and convert to uppercase
        token = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}