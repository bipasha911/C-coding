#include <stdio.h>

int main() {
    int n, key, count = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
        else
            arr[i - count] = arr[i];
    }

    printf("Array after removing %d: ", key);
    for (int i = 0; i < n - count; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
