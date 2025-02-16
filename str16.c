#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** splitString(char* str, const char* delimiter, int* count) {
    char* strCopy = strdup(str); // Important: Create a copy to avoid modifying the original
    char* token;
    char** result = NULL;
    *count = 0;

    token = strtok(strCopy, delimiter);

    while (token != NULL) {
        (*count)++;
        result = (char**)realloc(result, sizeof(char*) * (*count)); // Dynamic allocation for substrings
        if (result == NULL) {
            perror("Reallocation failed");
            exit(EXIT_FAILURE);
        }
        result[(*count) - 1] = strdup(token); // Store the token (another copy!)
        token = strtok(NULL, delimiter);
    }

    free(strCopy); // Free the copy of the original string

    return result;
}

int main() {
    char str[200];
    char delimiter[50];
    int count = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    printf("Enter the delimiter: ");
    fgets(delimiter, sizeof(delimiter), stdin);
    delimiter[strcspn(delimiter, "\n")] = 0; // Remove trailing newline

    char** substrings = splitString(str, delimiter, &count);

    if (substrings != NULL) {
        printf("Number of substrings: %d\n", count);
        for (int i = 0; i < count; i++) {
            printf("Substring %d: %s\n", i + 1, substrings[i]);
            free(substrings[i]); // Free each substring
        }
        free(substrings); // Free the array of pointers
    }

    return 0;
}