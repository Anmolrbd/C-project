#include <stdio.h>
#include <conio.h>

int main() {
    int N, sum = 0,i;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    getch();

    return 0;
}

