#include <stdio.h>
#include <conio.h>
#include<math.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double sumSeries(double x, int n) {
    if (n == 0) {
        return x;
    }
    return (x / factorial(2 * n)) + sumSeries(x, n - 1);
}

int main() {
    double x;
    int N;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %.6lf", N, sumSeries(x, N));

    getch();
    return 0;
}

