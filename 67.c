#include <stdio.h>
#include<conio.h>
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else
        return 0;
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    if (num2 != 0)
        printf("Division: %.2f\n", divide(num1, num2));
    else
        printf("Division by zero is not allowed.\n");
      getch();
    return 0;
}

