#include <stdio.h>
#include <conio.h>

int areAllBitsUnset(int n) {
    return (n == 0);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (areAllBitsUnset(n)) {
        printf("All bits are unset (low).\n");
    } else {
        printf("Not all bits are unset (low).\n");
    }

    getch();

    return 0;
}

