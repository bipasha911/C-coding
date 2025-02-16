#include <stdio.h>

int main() {
    int r;
    printf("Enter matrix size (NxN): ");
    scanf("%d", &r);
    
    int mat[r][r], sum = 0;
    printf("Enter matrix elements: ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < r; i++) {
        sum += mat[i][i];
        if (i != r - i - 1) // Avoid double-counting middle element
            sum += mat[i][r - i - 1];
    }

    printf("Sum of diagonals: %d\n", sum);
    return 0;
}
