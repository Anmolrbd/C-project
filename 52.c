#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,diff;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	diff = num1 + ~num2 + 1;
	printf("/nThe difference between %d and %d is %d",num1,num2,diff);
getch();
return 0;
}

