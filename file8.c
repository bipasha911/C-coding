#include <stdio.h>
#include <stdlib.h>

int main() {
    char source_filename[100], dest_filename[100];
    FILE *source_file, *dest_file;
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", source_filename);
    printf("Enter the destination filename: ");
    scanf("%s", dest_filename);

    source_file = fopen(source_filename, "r");
    dest_file = fopen(dest_filename, "a"); // "a" for append

    if (source_file == NULL || dest_file == NULL) {
        perror("Error opening files");
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File appended successfully.\n");

    fclose(source_file);
    fclose(dest_file);

    return 0;
}