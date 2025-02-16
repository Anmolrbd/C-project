#include <stdio.h>
#include <conio.h>

int countBitsToFlip(unsigned int n1, unsigned int n2) {
    unsigned int xorResult = n1 ^ n2;
    int count = 0;
    while (xorResult) {
        count += xorResult & 1;
        xorResult >>= 1;
    }
    return count;
}

int main() {
    unsigned int n1, n2;

    printf("Enter first number: ");
    scanf("%u", &n1);

    printf("Enter second number: ");
    scanf("%u", &n2);

    int bitsToFlip = countBitsToFlip(n1, n2);

    printf("Number of bits to flip: %d\n", bitsToFlip);

    getch();

    return 0;
}

