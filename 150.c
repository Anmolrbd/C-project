#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("First integer: %d\n", a);
    printf("Second integer: %d\n", b);

    getch();

    return 0;
}

