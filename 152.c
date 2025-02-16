#include <stdio.h>
#include <conio.h>

int hasAlternatingBits(int n) {
    int x = n ^ (n >> 1);
    return (x & (x + 1)) == 0;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (hasAlternatingBits(n)) {
        printf("The number contains an alternating pattern of bits.\n");
    } else {
        printf("The number does not contain an alternating pattern of bits.\n");
    }

    getch();

    return 0;
}

