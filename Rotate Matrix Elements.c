#include <stdio.h>

void rotateMatrix(int mat[][100], int r, int c) {
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    int prev, curr;

    while (top < bottom && left < right) {
        prev = mat[top + 1][left];

        // Move top row
        for (int i = left; i <= right; i++) {
            curr = mat[top][i];
            mat[top][i] = prev;
            prev = curr;
        }
        top++;

        // Move right column
        for (int i = top; i <= bottom; i++) {
            curr = mat[i][right];
            mat[i][right] = prev;
            prev = curr;
        }
        right--;

        // Move bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                curr = mat[bottom][i];
                mat[bottom][i] = prev;
                prev = curr;
            }
            bottom--;
        }

        // Move left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                curr = mat[i][left];
                mat[i][left] = prev;
                prev = curr;
            }
            left++;
        }
    }
}

void printMatrix(int mat[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int mat[100][100];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    rotateMatrix(mat, r, c);

    printf("Rotated Matrix:\n");
    printMatrix(mat, r, c);

    return 0;
}
