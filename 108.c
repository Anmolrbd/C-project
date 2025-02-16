#include <conio.h>
#include <stdio.h>

int main() {
    int i, j;
    char ch;
    
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            if(j % 2 == 1)
                printf("%d", j);
            else {
                ch = 'A' + (j / 2) - 1;
                printf("%c", ch);
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

