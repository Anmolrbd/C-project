#include <stdio.h>
#include <conio.h>

int main() {
    int num, factorial = 1,i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", num, factorial);

    getch();
    return 0;
}

