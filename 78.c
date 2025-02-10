#include <stdio.h>
#include <conio.h>
int main() {
double base, height, area;
printf("Enter base and height of the triangle: ");
scanf("%lf %lf", &base, &height);
area = 0.5 * base * height;
printf("Area of the triangle is: %.2lf\n", area);
getch();
return 0;
}

