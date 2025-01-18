#include<stdio.h>
#include<conio.h>
int main(){
	float emp_fund,empr_fund,basic_salary;
	printf("Enter the basic salary: ");
	scanf("%f",&basic_salary);
	emp_fund = (basic_salary/100)*12.5;
	empr_fund = (basic_salary/100)*12.0;
	printf("\nBasic Salary: %f",basic_salary);
	printf("\nEmployee Fund: %f",emp_fund);
	printf("\nEmployer Fund: %f",empr_fund);
	
getch();
return 0;
}

