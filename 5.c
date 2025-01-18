#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num,cube,cubepow;
	printf("Enter any number:");
	scanf("%d",&num);
	cube = num*num*num;
	cubepow = pow(num,3);
	printf("(Without using pow)The cube of the number %d is %d\n (Using pow function) The cube of the number %d is %d",num,cube,num,cubepow);
getch();
return 0;
}

