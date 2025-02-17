#include <stdio.h>
#include <conio.h>

int sumOfSeries(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumOfSeries(n - 1) + (n * (n + 1) / 2);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %d", N, sumOfSeries(N));

    getch();
    return 0;
}

