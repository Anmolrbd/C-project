#include <stdio.h>
#include <conio.h>
int main() {
double side, area;
printf("Enter the side length of the cube: ");
scanf("%lf", &side);
area = 6 * side * side;
printf("Surface area of the cube is: %.2lf\n", area);
getch();
return 0;
}

