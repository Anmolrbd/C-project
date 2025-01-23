#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,rem;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	rem = num1 - (num1/num2)*num2;
	printf("The remainder is %d",rem);
getch();
return 0;
}

