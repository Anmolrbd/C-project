#include <stdio.h>
#include <conio.h>

unsigned char swapNibbles(unsigned char n) {
    return (n << 4) | (n >> 4);
}

int main() {
    unsigned char n;

    printf("Enter a byte (0-255): ");
    scanf("%hhu", &n);

    unsigned char swapped = swapNibbles(n);

    printf("Original byte: 0x%X\n", n);
    printf("Byte after swapping nibbles: 0x%X\n", swapped);

    getch();

    return 0;
}

