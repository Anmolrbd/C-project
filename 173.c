#include <stdio.h>
#include <conio.h>

int isPrime(int num) {
	int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);
    for (i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    getch();

    return 0;
}

