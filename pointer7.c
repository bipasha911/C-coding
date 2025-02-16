#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char* str) {
    int len = strlen(str);
    char* start = str;
    char* end = str + len - 1;