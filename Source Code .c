#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen(__FILE__, "r"); // __FILE__ is a predefined macro containing the current filename

    if (fp == NULL) {
        perror("Error opening source file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}