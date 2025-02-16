#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep()

int main() {
    time_t t;
    struct tm *tm;
    char s[20];

    while (1) {
        t = time(NULL);
        tm = localtime(&t);

        strftime(s, 20, "%I:%M:%S %p", tm);
        printf("\r%s", s); // \r overwrites the previous line

        fflush(stdout); // Flush output buffer
        sleep(1);       // Wait for 1 second
    }

    return 0;
}