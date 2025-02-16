#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[100];
    char pattern[50];
    FILE *file;
    char line[MAX_LINE_LENGTH];

    printf("Enter the filename: ");
    scanf("%s", filename);
    printf("Enter the pattern: ");
    scanf("%s", pattern);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, pattern) != NULL) {
            printf("%s", line); // Print the entire line containing the pattern
        }
    }

    fclose(file);

    return 0;
}