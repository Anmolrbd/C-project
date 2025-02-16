#include <stdio.h>
#include <conio.h>

void printBitsToFlip(unsigned int n1, unsigned int n2) {
    unsigned int xorResult = n1 ^ n2;
    printf("Bits to flip: ");
    int i;
    for ( i = 31; i >= 0; i--) {
        if ((xorResult >> i) & 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    unsigned int n1, n2;

    printf("Enter first number: ");
    scanf("%u", &n1);

    printf("Enter second number: ");
    scanf("%u", &n2);

    printBitsToFlip(n1, n2);

    getch();

    return 0;
}

