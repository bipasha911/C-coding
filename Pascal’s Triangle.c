#include <stdio.h>

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        printf("\n");
    }
    
    return 0;
}
