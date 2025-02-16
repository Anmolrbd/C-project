#include <conio.h>
#include <stdio.h>

int main() {
    char ch;
    int i, j, spaces;
    for(i = 5; i >= 1; i--) {
        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", ch++);
        }
        for(spaces = 1; spaces <= (5 - i) * 2 - 1; spaces++) {
            printf(" ");
        }
        ch--;
        for(j = i; j >= 1; j--) {
            printf("%c", ch--);
        }
        printf("\n");
    }
    getch();
    return 0;
}

