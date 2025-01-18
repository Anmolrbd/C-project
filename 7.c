#include<stdio.h>
#include<conio.h>
int main(){
	float principal,time,rate,SI=0;
	printf("Enter principal:");
	scanf("%f",&principal);
	printf("Enter time:");
	scanf("%f",&time);
	printf("Enter rate:");
	scanf("%f",&rate);
	SI = (principal*time*rate)/100;
	printf("The simple interest is = %.3f",SI);
getch();
return 0;
}

