#include <stdio.h>

int main() {
    int rows, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int totalNumbers = rows * (rows + 1) / 2; // Sum of first n natural numbers
    num = totalNumbers;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%d ", num--);
        printf("\n");
    }

    return 0;
}
