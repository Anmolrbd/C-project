#include <stdio.h>
#include <conio.h>

int sumSeries(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        return -n + sumSeries(n - 1);
    } else {
        return n + sumSeries(n - 1);
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %d", N, sumSeries(N));

    getch();
    return 0;
}

