#include <stdio.h>
#include <conio.h>

char *my_strstr(const char *haystack, const char *needle) {
    if (!*needle) return (char *)haystack;
    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (!*n) return (char *)haystack;
        haystack++;
    }
    return NULL;
}

int main() {
    char str1[] = "Hello, welcome to Pokhara!";
    char str2[] = "welcome";
    char *result;

    result = my_strstr(str1, str2);

    if (result)
        printf("Substring found at position: %ld\n", result - str1);
    else
        printf("Substring not found\n");

    getch();
    return 0;
}

