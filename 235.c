#include <stdio.h>
#include <conio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiply(a, b - 1);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Product of %d and %d is: %d", num1, num2, multiply(num1, num2));

    getch();
    return 0;
}

