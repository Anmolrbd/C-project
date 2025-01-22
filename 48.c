#include<stdio.h>
#include<conio.h>
int main(){
	float CP,SP,amount;
	printf("Enter the Cost Price: ");
	scanf("%f",&CP);
	printf("Enter the Sell Price: ");
	scanf("%f",&SP);
	if(SP > CP)
	{
		amount = SP - CP;
		printf("\nProfit = %.3f",amount);
	}
	else if(SP < CP)
	{
		amount = CP - SP;
		printf("\nLoss = %.3f",amount);
	}
	else
	{
		printf("No profit and no loss.");
	}
getch();
return 0;
}

