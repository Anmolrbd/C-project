#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("The compound interest is: %.2f\n", compoundInterest);

    getch();

    return 0;
}

