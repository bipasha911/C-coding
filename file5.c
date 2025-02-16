#include <stdio.h>
#include <stdlib.h>

int main() {
    char file1_name[100], file2_name[100];
    FILE *file1, *file2;
    char ch1, ch2;
    int line_num = 1, col_num = 1;

    printf("Enter the name of the first file: ");
    scanf("%s", file1_name);
    printf("Enter the name of the second file: ");
    scanf("%s", file2_name);

    file1 = fopen(file1_name, "r");
    file2 = fopen(file2_name, "r");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening files");
        return 1;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            printf("Mismatch at line %d, column %d: File 1: '%c', File 2: '%c'\n", line_num, col_num, ch1, ch2);
        }
        col_num++;
        if (ch1 == '\n') {
            line_num++;
            col_num = 1;
        }
    }

    // Check for extra characters in either file
    if (fgetc(file1) != EOF || fgetc(file2) != EOF) {
        printf("Files have different lengths.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}