#include <stdio.h>
#include <time.h>
#include <locale.h> // For strftime with locale support

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[20];

    // Set locale for proper AM/PM formatting (important!)
    setlocale(LC_ALL, ""); // Uses the user's locale

    strftime(s, 20, "%I:%M:%S %p", tm); // %I for 12-hour format, %p for AM/PM
    printf("Current time in AM/PM format: %s\n", s);

    return 0;
}