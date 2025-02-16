#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float principal, rate, emi;
    int months;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the number of months: ");
    scanf("%d", &months);

    rate = rate / 12 / 100;  // Monthly interest rate

    emi = (principal * rate * pow(1 + rate, months)) / (pow(1 + rate, months) - 1);

    printf("The EMI is: %.2f\n", emi);

    getch();

    return 0;
}

