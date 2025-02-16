#include <stdio.h>
#include <conio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    while (n) {
        count++;
        n <<= 1;
    }
    return sizeof(n) * 8 - count;
}

int main() {
    unsigned int n;

    printf("Enter an unsigned integer: ");
    scanf("%u", &n);

    int leadingZeros = countLeadingZeros(n);

    printf("The number of leading zeros is: %d\n", leadingZeros);

    getch();

    return 0;
}

