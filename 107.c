#include <conio.h>
#include <stdio.h>

int main() {
    char ch;
    int i, j, spaces;
    for(i = 1; i <= 5; i++) {
        ch = 'A' + i - 1;
        for(j = i; j >= 1; j--) {
            printf("%c", ch--);
        }
        ch += 2;
        for(j = 1; j < i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }
    getch();
    return 0;
}

