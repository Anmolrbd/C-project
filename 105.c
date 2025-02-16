#include <conio.h>
#include <stdio.h>

int main() {
    char ch;
    int i, j;
    for(i = 1; i <= 5; i++) {
        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    getch();
    return 0;
}

