#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main() {
    wchar_t str[100];
    int index;

    // Set the locale for proper Unicode handling
    setlocale(LC_ALL, "");

    wprintf(L"Enter a string: ");
    wscanf(L"%ls", str);

    printf("Enter the index: ");
    scanf("%d", &index);

    if (index >= 0 && index < wcslen(str)) {
        wprintf(L"Unicode code point at index %d: %lc (Decimal: %d)\n", index, str[index], str[index]);
    } else {
        printf("Invalid index.\n");
    }

    return 0;
}