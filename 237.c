#include <stdio.h>
#include <conio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("LCM of %d and %d is: %d", num1, num2, lcm(num1, num2));

    getch();
    return 0;
}

