#include <stdio.h>
#include <conio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int reverse = 0;
    int bitCount = sizeof(n) * 8;
	int i;
    for (i = 0; i < bitCount; i++) {
        if (n & (1 << i)) {
            reverse |= (1 << ((bitCount - 1) - i));
        }
    }

    return reverse;
}

int main() {
    unsigned int n;

    printf("Enter a number: ");
    scanf("%u", &n);

    unsigned int reversed = reverseBits(n);

    printf("The number after reversing the bits is: %u\n", reversed);

    getch();

    return 0;
}

