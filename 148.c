#include <stdio.h>
#include <conio.h>

int isEven(int n) {
    return (n & 1) == 0;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isEven(n)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    getch();

    return 0;
}

