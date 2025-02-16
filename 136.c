#include <stdio.h>
#include <conio.h>

void swapBits(int *n, int pos1, int pos2) {
    int bit1 = (*n >> pos1) & 1;
    int bit2 = (*n >> pos2) & 1;

    if (bit1 != bit2) {
        *n ^= (1 << pos1);
        *n ^= (1 << pos2);
    }
}

int main() {
    int n, pos1, pos2;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter the position of the first bit: ");
    scanf("%d", &pos1);

    printf("Enter the position of the second bit: ");
    scanf("%d", &pos2);

    swapBits(&n, pos1, pos2);

    printf("The new number after swapping bits: %d\n", n);

    getch();

    return 0;
}

