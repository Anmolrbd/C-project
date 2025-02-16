#include <stdio.h>
#include <conio.h>

int countTrailingZeroes(int n) {
    int count = 0;
    
    while (n % 10 == 0 && n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int trailingZeroes = countTrailingZeroes(n);

    printf("Number of trailing zeroes: %d\n", trailingZeroes);

    getch();

    return 0;
}

