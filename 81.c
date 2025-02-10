#include <stdio.h>
#include <conio.h>
int main() {
double base, height, area;
printf("Enter the base and height of the parallelogram: ");
scanf("%lf %lf", &base, &height);
area = base * height;
printf("Area of the parallelogram is: %.2lf\n", area);
getch();
return 0;
}


