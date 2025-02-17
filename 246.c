#include <stdio.h>
#include <conio.h>
#include<math.h>
double sumSeries(double x, int n) {
    if (n == 0) {
        return 1;
    }
    return 1 / pow(x, n) + sumSeries(x, n - 1);
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

