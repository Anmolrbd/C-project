#include <stdio.h>
#include <conio.h>

int replaceBit(int n, int m, int pos) {
    n &= ~(1 << pos);
    m = (m & (1 << pos)) >> pos;
    n |= (m << pos);
    return n;
}

int main() {
    int n, m, pos;

    printf("Enter the first integer (n): ");
    scanf("%d", &n);

    printf("Enter the second integer (m): ");
    scanf("%d", &m);

    printf("Enter the position (0-based index): ");
    scanf("%d", &pos);

    int result = replaceBit(n, m, pos);

    printf("The number after replacing the bit: %d\n", result);

    getch();

    return 0;
}

