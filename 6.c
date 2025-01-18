#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,rem=0;
	float quot=0;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	quot = num1/num2;
	rem = num1 % num2;
	printf("The quotient of %d (dividend) and %d(divisor) is = %.2f\nThe remainder of %d and %d is = %d",num1,num2,quot,num1,num2,rem);
getch();
return 0;
}

