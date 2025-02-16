#include <stdio.h>

int main() {
    char old_filename[100];
    char new_filename[100];

    printf("Enter the old filename: ");
    scanf("%s", old_filename);

    printf("Enter the new filename: ");
    scanf("%s", new_filename);

    if (rename(old_filename, new_filename) == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
    }

    return 0;
}