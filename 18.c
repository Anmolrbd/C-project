#include<stdio.h>
#include<conio.h>
#define PI 3.1415
int main(){
	float radius,peri;
	printf("Enter radius: ");
	scanf("%f",&radius);
	peri = 2 * PI * radius;
	printf("The perimeter of the circle is = %.3f",peri);

	
getch();
return 0;
}

