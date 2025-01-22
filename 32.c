#include<stdio.h>
#include<conio.h>
void swap(int *x, int *y);
int main(){
	int num1,num2,*x,*y;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	x = &num1;
	y = &num2;
	printf("Original orientation: %d %d",num1,num2);
	swap(&num1,&num2);
	
getch();
return 0;
}
void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("\nSwaped orientation: %d %d",*x,*y);
}

