#include <stdio.h>
#include <sys/stat.h> // For chmod

int main() {
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    if (chmod(filename, 0444) == 0) { // 0444 gives read permission to all
        printf("File made read-only.\n");
    } else {
        perror("Error making file read-only");
    }

    return 0;
}