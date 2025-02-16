#include <conio.h>
#include <stdio.h>

int main() {
    int i, j, num;
    for(i = 5; i >= 1; i--) {
        num = 1;
        for(j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        num -= 2;
        for(j = 1; j < i; j++) {
            printf("%d", num--);
        }
        printf("\n");
    }
    getch();
    return 0;
}

