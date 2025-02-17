#include <stdio.h>
#include <conio.h>

void reverseNumber(int n, int *rev) {
    if (n == 0) {
        return;
    }
    *rev = *rev * 10 + n % 10;
    reverseNumber(n / 10, rev);
}

int main() {
    int num, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    reverseNumber(num, &rev);
    
    printf("Reversed number: %d", rev);

    getch();
    return 0;
}

