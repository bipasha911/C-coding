#include <stdio.h>
#include <stdlib.h>

int* create_array(int size) {
    int* arr = (int*)malloc(sizeof(int) * size);
    if (arr == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE); // Or handle the error as needed
    }
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2; // Example initialization
    }
    return arr;
}

int main() {
    int* my_array = create_array(5);
    if (my_array != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", my_array[i]); // Output: 0 2 4 6 8
        }
        printf("\n");
        free(my_array); // VERY IMPORTANT: Free the allocated memory
    }
    return 0;
}