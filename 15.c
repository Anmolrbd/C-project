#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,result;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	if(num2 > num1)
	{
		num2 = num2 + num1;
		num1 = num2 - num1;
		num2 = num2 - num1;
		result = num1 - num2;
		printf("\nThe subtraction of %d and %d is %d",num1,num2,result);
	}
	else{
		result = num1 - num2;
		printf("\nThe subtraction of %d and %d is %d",num1,num2,result);
	}
	
getch();
return 0;
}

