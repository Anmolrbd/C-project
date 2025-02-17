#include <stdio.h>
#include <conio.h>

int isPrime(int n, int i) {
    if (n <= 1) {
        return 0;
    }
    if (i == n) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num, 2)) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    getch();
    return 0;
}

