#include <conio.h>
#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 6; i++) {
        for(j = 1; j <= i; j++) {
            if(j % 2 == 1)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    getch();
    return 0;
}

