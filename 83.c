#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
double radius, height, surface_area, volume;
printf("Enter the radius and height of the cylinder: ");
scanf("%lf %lf", &radius, &height);
surface_area = 2 * M_PI * radius * (radius + height);
volume = M_PI * radius * radius * height;
printf("Surface area of the cylinder is: %.2lf\n", surface_area);
printf("Volume of the cylinder is: %.2lf\n", volume);
getch();
return 0;
}

