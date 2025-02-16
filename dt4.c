#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[100];

    strftime(s, 100, "%Y-%m-%d %H:%M:%S", tm); // Combine date and time
    printf("Current Date and Time: %s\n", s);

    return 0;
}