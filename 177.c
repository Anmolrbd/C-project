#include <stdio.h>
#include <conio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Leap years from 1 to %d are:\n", N);
    for (i = 1; i <= N; i++) {
        if (isLeapYear(i)) {
            printf("%d ", i);
        }
    }

    getch();

    return 0;
}

