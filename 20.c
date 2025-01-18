#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,HCF=1,temp;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	while ( num2 !=0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	
	printf("The HCF of %d and %d is %d",num1,num2,HCF);
getch();
return 0;
}

