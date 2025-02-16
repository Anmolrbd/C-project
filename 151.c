#include <stdio.h>
#include <conio.h>

int isNthBitSet(int n, int position) {
    return (n & (1 << position)) != 0;
}

int main() {
    int n, position;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &n);

    printf("Enter the bit position (0-based index): ");
    scanf("%d", &position);

    if (isNthBitSet(n, position)) {
        printf("The %d-th bit is set (1).\n", position);
    } else {
        printf("The %d-th bit is not set (0).\n", position);
    }

    getch();

    return 0;
}

