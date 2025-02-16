#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Number\tSquare\tCube\tSquare Root\n");
    for (i = 1; i <= N; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i, i*i, i*i*i, sqrt(i));
    }

    getch();

    return 0;
}

