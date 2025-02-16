#include <stdio.h>
#include <conio.h>

int main() {
    char ch = 'a';

    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    getch();

    return 0;
}

