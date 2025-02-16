#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    char* strings[] = {"banana", "apple", "orange", "grape"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    qsort(strings, num_strings, sizeof(char*), compare_strings);

    printf("Sorted strings:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
