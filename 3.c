#include<stdio.h>
#include<conio.h>
int main(){
float average=0,num1,num2,sum=0;
	printf("Enter two numbers:\t");
	scanf("%f %f",&num1,&num2);
	sum = num1 + num2;
	average = sum/2;
	printf("The sum of the numbers %.2f and %.2f is = %.2f\nThe average of the numbers %.2f and %.2f is = %.2f",num1,num2,sum,num1,num2,average);
getch();
return 0;
}

