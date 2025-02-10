#include <stdio.h>
#include <conio.h>
int main() {
double diagonal1, diagonal2, area;
printf("Enter the lengths of the two diagonals of the rhombus: ");
scanf("%lf %lf", &diagonal1, &diagonal2);
area = 0.5 * diagonal1 * diagonal2;
printf("Area of the rhombus is: %.2lf\n", area);
getch();
return 0;
}

