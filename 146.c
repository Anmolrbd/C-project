#include <stdio.h>
#include <conio.h>

int areAllBitsOne(int n) {
    return (n != 0) && ((n & (n + 1)) == 0);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (areAllBitsOne(n)) {
        printf("All bits are set to one (1).\n");
    } else {
        printf("Not all bits are set to one (1).\n");
    }

    getch();

    return 0;
}

