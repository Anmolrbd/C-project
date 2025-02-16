#include <stdio.h>
#include <conio.h>

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are:\n", N);
    for (i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }

    printf("\nOdd numbers from 1 to %d are:\n", N);
    for (i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }

    getch();

    return 0;
}

