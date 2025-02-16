#include <conio.h>
#include <stdio.h>

int main() {
    int i, j, spaces;
    for(i = 1; i <= 5; i++) {
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}

