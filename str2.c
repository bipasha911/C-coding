#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = (len_a > len_b) ? len_a : len_b;

    char* result = (char*)malloc(sizeof(char) * (max_len + 2)); // +1 for '\0', +1 for potential carry
    result[max_len + 1] = '\0';

    int carry = 0;
    int i = len_a - 1, j = len_b - 1, k = max_len;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) {
        result[0] = '1';
        return result;
    } else {
         return result + 1; // Skip the leading zero if no carry
    }
}


int main() {
    char a[100], b[100];
    printf("Enter binary string a: ");
    scanf("%s", a);
    printf("Enter binary string b: ");
    scanf("%s", b);

    char *sum = addBinary(a, b);
    printf("Sum: %s\n", sum);
    free(sum); // Important: Free the dynamically allocated memory
    return 0;
}