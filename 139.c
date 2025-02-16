#include <stdio.h>
#include <conio.h>

int countOnes(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int n;

    printf("Enter a number: ");
    scanf("%u", &n);

    int onesCount = countOnes(n);

    printf("The number of 1's in the binary representation is: %d\n", onesCount);

    getch();

    return 0;
}

