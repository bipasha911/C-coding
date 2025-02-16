#include <stdio.h>

int main() {
    int hours;

    printf("Enter hours: ");
    scanf("%d", &hours);

    int minutes = hours * 60;
    int seconds = hours * 3600;

    printf("%d hours = %d minutes = %d seconds\n", hours, minutes, seconds);

    return 0;
}