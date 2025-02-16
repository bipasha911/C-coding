#include <stdio.h>

int main() {
    int mat[2][2];
    printf("Enter 2x2 matrix elements: ");
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);

    int determinant = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

    printf("Determinant of matrix: %d\n", determinant);
    return 0;
}
