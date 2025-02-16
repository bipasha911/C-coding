#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *gmt_tm = gmtime(&t); // Use gmtime() for GMT

    char s[100];
    strftime(s, 100, "%Y-%m-%d %H:%M:%S GMT", gmt_tm); // Add GMT indicator
    printf("Current time in GMT: %s\n", s);

    return 0;
}