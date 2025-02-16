#include <stdio.h>
#include <conio.h>

int nextPowerOf2(int n) {
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return n + 1;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = nextPowerOf2(n);

    printf("The next power of 2 greater than or equal to %d is: %d\n", n, result);

    getch();

    return 0;
}

