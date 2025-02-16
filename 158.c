#include <stdio.h>
#include <conio.h>

unsigned int swapBits(unsigned int n, int pos1, int pos2) {
    if (((n >> pos1) & 1) != ((n >> pos2) & 1)) {
        n ^= (1 << pos1);
        n ^= (1 << pos2);
    }
    return n;
}

int main() {
    unsigned int n;
    int pos1, pos2;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &n);

    printf("Enter the positions of the bits to swap: ");
    scanf("%d %d", &pos1, &pos2);

    n = swapBits(n, pos1, pos2);

    printf("The number after swapping the bits is: %u\n", n);

    getch();

    return 0;
}

