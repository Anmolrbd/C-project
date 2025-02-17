#include <stdio.h>
#include <conio.h>

int sumSeries(int n) {
    static int num = 1;
    if (n == 1) {
        return num;
    }
    int result = num + sumSeries(n - 1);
    num = num * 10 + 1;
    return result;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Sum of the series up to %d terms is: %d", N, sumSeries(N));

    getch();
    return 0;
}

