#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String in hexadecimal: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%X ", str[i]);
    }

    getch();

    return 0;
}

