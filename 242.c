#include <stdio.h>
#include <conio.h>
#include<math.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double sumSeries(int n) {
    if (n == 1) {
        return 1.0;
    }
    return (double)(n * n) / factorial(n) + sumSeries(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %.6lf", N, sumSeries(N));

    getch();
    return 0;
}

