#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200], delim[10], *token;

    printf("Enter a string: ");
    gets(str);

    printf("Enter delimiters: ");
    gets(delim);

    token = strtok(str, delim);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    getch();
    return 0;
}

