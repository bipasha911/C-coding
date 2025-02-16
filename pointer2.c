#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int cols = 4;

    // Declare the array of pointers
    int** arr = (int**)malloc(sizeof(int*) * rows);

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(sizeof(int) * cols);
        if (arr[i] == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
    }

    // Initialize and use the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory (important!)
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}