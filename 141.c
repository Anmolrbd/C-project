#include <stdio.h>
#include <conio.h>

int main() {
    int num, shiftedValue;

    printf("Enter a number: ");
    scanf("%d", &num);

    shiftedValue = num << 1;

    printf("Original number: %d\n", num);
    printf("Number after left shift by 1: %d\n", shiftedValue);

    getch();

    return 0;
}

