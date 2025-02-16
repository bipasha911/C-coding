#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* insertString(char* originalString, const char* stringToInsert, int position) {
    int originalLength = strlen(originalString);
    int insertLength = strlen(stringToInsert);

    // Check for valid position
    if (position < 0 || position > originalLength) {
        printf("Invalid position for insertion.\n");
        return NULL; // Or handle the error as needed
    }

    // Allocate memory for the new string (important!)
    char* newString = (char*)malloc(sizeof(char) * (originalLength + insertLength + 1));

    if (newString == NULL) {
        perror("Memory allocation failed"); // Check for allocation errors
        exit(EXIT_FAILURE);
    }


    // Copy the part of the original string before the insertion point
    strncpy(newString, originalString, position);
    newString[position] = '\0'; // Important: Null-terminate the copied part

    // Concatenate the string to be inserted
    strcat(newString, stringToInsert);

    // Concatenate the remaining part of the original string
    strcat(newString, originalString + position);

    return newString;
}

int main() {
    char originalString;
    char stringToInsert;
    int position;

    printf("Enter the original string: ");
    fgets(originalString, sizeof(originalString), stdin);
    originalString[strcspn(originalString, "\n")] = 0; // Remove trailing newline

    printf("Enter the string to insert: ");
    fgets(stringToInsert, sizeof(stringToInsert), stdin);
    stringToInsert[strcspn(stringToInsert, "\n")] = 0; // Remove trailing newline

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    char* result = insertString(originalString, stringToInsert, position);

    if (result!= NULL) {
        printf("Resultant string: %s\n", result);
        free(result); // Free the dynamically allocated memory (crucial!)
    }

    return