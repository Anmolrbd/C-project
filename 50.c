#include<stdio.h>
#include<conio.h>
int main(){
	float length , breadth, area,peri;
	printf("Enter length: ");
	scanf("%f",&length);
	printf("Enter breadth: ");
	scanf("%f",&breadth);
	area = length * breadth;
	peri = 2*(length + breadth);
	printf("Area = %.3f\nPerimeter = %.3f",area,peri);
getch();
return 0;
}

