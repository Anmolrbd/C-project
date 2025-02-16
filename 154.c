#include <stdio.h>
#include <conio.h>

int findMSBPosition(unsigned int n) {
    int position = -1;
    while (n) {
        position++;
        n >>= 1;
    }
    return position;
}

int main() {
    unsigned int n;

    printf("Enter an unsigned integer: ");
    scanf("%u", &n);

    int msbPosition = findMSBPosition(n);

    printf("The position of the MSB is: %d\n", msbPosition);

    getch();

    return 0;
}

