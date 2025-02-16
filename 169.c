#include <stdio.h>
#include <conio.h>

int main() {
    int num, i;

    for (num = 1; num <= 20; num++) {
        printf("Multiplication table of %d:\n", num);
        i = 1;
        while (i <= 10) {
            printf("%d x %d = %d\n", num, i, num * i);
            i++;
        }
        printf("\n");
    }

    getch();

    return 0;
}

