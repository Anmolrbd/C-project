#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,*x,*y,*z;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	x = &a;
	y = &b;
	z = &c;
	if(*x > *y && *x > *z)
	{
		printf("%d is the largest.",*x);
	}
	else if(*y > *x && *y > *z)
	{
		printf("%d is the largest.",*y);
	}
	else
		{
				printf("%d is the largest.",*z);
}
getch();
return 0;
}

