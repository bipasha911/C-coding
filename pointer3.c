#include <stdio.h>

int find_largest(int* arr, int size) {
    int* largest = arr; // Assume the first element is the largest initially

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest) { // Or if (arr[i] > *largest)
            largest = arr + i;      // Update the pointer
        }
    }

    return *largest; // Return the value at the largest pointer
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = find_largest(arr, size);
    printf("Largest element: %d\n", largest); // Output: Largest element: 20

    return 0;
}