#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int mat1[r][c], mat2[r][c], result[r][c];

    printf("Enter first matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter second matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    
    return 0;
}
