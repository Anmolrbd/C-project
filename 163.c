#include <stdio.h>
#include <conio.h>

int main() {
    int N, i = 2;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i += 2;
    }

    getch();

    return 0;
}

