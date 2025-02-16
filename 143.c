#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    getch();

    return 0;
}

