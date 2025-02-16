#include <stdio.h>
#include <conio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;

    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Armstrong numbers from 1 to %d are:\n", N);
    for (i = 1; i <= N; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    getch();

    return 0;
}

