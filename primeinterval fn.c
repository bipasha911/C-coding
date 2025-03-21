#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    printPrimes(start, end);
    return 0;
}
