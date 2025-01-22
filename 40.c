#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Original orientation:\n%d %d",num1,num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("\nSwapped orientation:\n%d %d",num1,num2);

getch();
return 0;
}

