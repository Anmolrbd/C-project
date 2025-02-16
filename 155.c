#include <stdio.h>
#include <conio.h>

int roundToLowerMultipleOf2(int n) {
    return n & (~1);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = roundToLowerMultipleOf2(n);

    printf("The next lower multiple of 2 is: %d\n", result);

    getch();

    return 0;
}

