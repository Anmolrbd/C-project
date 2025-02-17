#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str1[] = "Hello, welcome to Pokhara!";
    char str2[] = "welcome";
    char *result;

    result = strstr(str1, str2);

    if (result)
        printf("Substring found at position: %ld\n", result - str1);
    else
        printf("Substring not found\n");

    getch();
    return 0;
}

