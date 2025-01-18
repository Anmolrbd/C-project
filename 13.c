#include<stdio.h>
#include<conio.h>
int main(){
	int choice;
	float fh,cl;
	printf("Choose your choice:(1/2)");
	printf("\n1. Convert from Fahrenheit to Celsius.");
	printf("\n2. Convert from Celsius to Fahrenheit.\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\nEnter temperature in Fahrenheit:");
		scanf("%f",&fh);
		cl= (fh - 32) / 1.8;
		printf("\nThe temperature in celsius is = %.2f",cl);
		break ;
		case 2:
		printf("\nEnter temperature in Celsius:");
		scanf("%f",&cl);
		fh= (cl*1.8)+32;
		printf("\nThe temperature in Fahreheit is = %.2f",fh);
		break;
		
		default:
		printf("Invalid choice");
	}
	
	
getch();
return 0;
}


