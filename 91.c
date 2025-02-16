#include<stdio.h>
#include<conio.h>
typedef struct {
    float real, img;
} Complex;

Complex add(Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
int main() {
    Complex num1, num2, sum;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f%f", &num1.real, &num1.img);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f%f", &num2.real, &num2.img);
    sum = add(num1, num2);
    printf("The sum of the complex numbers is: %.2f + %.2fi", sum.real, sum.img);
    getch();
    return 0;
}
