#include <stdio.h>
#include <conio.h>
int main() {
double base1, base2, height, area;
printf("Enter the lengths of the two bases and the height of the trapezium: ");
scanf("%lf %lf %lf", &base1, &base2, &height);
area = 0.5 * (base1 + base2) * height;
printf("Area of the trapezium is: %.2lf\n", area);
getch();
return 0;
}

