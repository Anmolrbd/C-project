#include <stdio.h>
#include <conio.h>

int findHighestBitSet(int n) {
    int position = -1,i;
    
    for ( i = 31; i >= 0; i--) {
        if (n & (1 << i)) {
            position = i;
            break;
        }
    }

    return position;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int highestBit = findHighestBitSet(n);

    if (highestBit != -1) {
        printf("The highest bit set is at position: %d\n", highestBit);
    } else {
        printf("No bits are set.\n");
    }

    getch();

    return 0;
}

