#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp(str1, str2);

    if (result == 0