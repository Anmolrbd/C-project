#include<stdio.h>
#include<conio.h>
int main(){
	char name[20];
	float HRA,DA,PF,bsalary,gross;
	printf("Enter name: ");
	scanf("%s",name);
	printf("Enter basic salary: ");
	scanf("%f",&bsalary);
	printf("Enter House Rent Allowance(HRA): ");
	scanf("%f",&HRA);
	printf("Enter Dearness Allowance(DA): ");
	scanf("%f",&DA);
	PF = (bsalary*12)/100;
	gross = bsalary + DA + PF + HRA;
	printf("\nName: %s\nBasic Salary: %f\nHouse Rent Allowance(HRA): %f\nDearness Allowance(DA): %f\nProvident Fund(PF): %f\nGross Salary: %f",name,bsalary,HRA,DA,PF,gross );
	
getch();
return 0;
}

