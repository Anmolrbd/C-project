#include<stdio.h>
#include<conio.h>
int main(){
	float length , breadth , area;
	printf("Enter length: ");
	scanf("%f",&length);
	printf("Enter breadth: ");
	scanf("%f",&breadth);
	area = length * breadth;
	printf("The area of the ractangle is = %.2f",area); 
getch();
return 0;
}

