#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200], delim[10], *token, *rest;

    printf("Enter a string: ");
    gets(str);

    printf("Enter delimiters: ");
    gets(delim);

    rest = str;
    while ((token = strtok_r(rest, delim, &rest)) != NULL) {
        printf("%s\n", token);
    }

    getch();
    return 0;
}

