#include <stdio.h>
#include <conio.h>

void printBitsInRange(unsigned char byte, int start, int end) {
	int i;
    for ( i = end; i >= start; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char byte;
    int start, end;

    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);

    printf("Enter the start position: ");
    scanf("%d", &start);

    printf("Enter the end position: ");
    scanf("%d", &end);

    if (start >= 0 && end < 8 && start <= end) {
        printf("Bits between position %d and %d: ", start, end);
        printBitsInRange(byte, start, end);
    } else {
        printf("Invalid positions.\n");
    }

    getch();

    return 0;
}

