#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[100];

    setlocale(LC_ALL, "");

    printf("Current Date:\n");

    strftime(s, 100, "%Y-%m-%d", tm); // ISO 8601 format
    printf("ISO 8601: %s\n", s);

    strftime(s, 100, "%m/%d/%Y", tm); // US format
    printf("US: %s\n", s);

    strftime(s, 100, "%d-%m-%Y", tm); // European format
    printf("European: %s\n", s);

    strftime(s, 100, "%A, %B %d, %Y", tm); // Long format
    printf("Long: %s\n", s);

    // ... add more formats as needed

    return 0;
}