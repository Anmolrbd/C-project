#include <stdio.h>
#include <conio.h>

int main() {
    int N, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    getch();

    return 0;
}

