#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Uppercase alphabets:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n\nLowercase alphabets:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    getch();

    return 0;
}

