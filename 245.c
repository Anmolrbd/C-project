#include <stdio.h>
#include <conio.h>
#include<math.h>
int sumSeries(int n) {
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return -(n * n * n) + sumSeries(n - 1);
    } else {
        return (n * n * n) + sumSeries(n - 1);
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

