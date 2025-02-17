#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str1[] = "Hello, welcome to Pokhara!";
    char str2[] = "aeiou";
    char *result;

    result = strpbrk(str1, str2);

    if (result)
        printf("First matching character: %c at position: %ld\n", *result, result - str1);
    else
        printf("No matching character found\n");

    getch();
    return 0;
}
