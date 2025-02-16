#include <stdio.h>
#include <conio.h>

int isPowerOf2(unsigned int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main() {
    unsigned int n;

    printf("Enter a number: ");
    scanf("%u", &n);

    if (isPowerOf2(n)) {
        printf("%u is a power of 2.\n", n);
    } else {
        printf("%u is not a power of 2.\n", n);
    }

    getch();

    return 0;
}

