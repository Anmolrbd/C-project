#include<stdio.h>
#include<conio.h>
int main(){
	int num1 , num2 , i,prod = 0;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	for(i = 1;i<=num2;i++)
	{
		prod = num1 + prod;
	}
	printf("The multiplcation of %d and %d is %d",num1,num2,prod);
getch();
return 0;
}

