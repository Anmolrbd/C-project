#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,sub=0;
	printf("Enter two numbers:\t");
	scanf("%d %d",&num1,&num2);
	sub = num1 - num2;
	printf("The subtraction of %d and %d is %d",num1,num2,sub );
	getch();
	return 0;
}
