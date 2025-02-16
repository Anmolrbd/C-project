#include <stdio.h>
#include <conio.h>

int main() {
    int num, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    getch();

    return 0;
}

