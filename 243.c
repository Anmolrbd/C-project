#include <stdio.h>
#include <conio.h>
#include<math.h>
double sumSeries(int n) {
    if (n == 1) {
        return 1.0 * 2 / 3;
    }
    return (double)(n * (n + 1)) / (n + 2) + sumSeries(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %.6lf", N, sumSeries(N));

    getch();
    return 0;
}

