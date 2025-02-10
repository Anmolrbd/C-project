#include<stdio.h>
#include<conio.h>
int main(){
	struct company{
		int phone,noOFEmployee;
		char name[20],address[30];
	};
	struct company c;
	printf("Enter name of the company: ");
	scanf("%s",c.name);
	printf("Enter address: ");
	scanf("%s",c.address);
	printf("Enter phone number: ");
	scanf("%d",&c.phone);
	printf("Enter the number of employees: ");
	scanf("%d",&c.noOFEmployee);
	printf("Name: %s",c.name);
	printf("\nAddress: %s",c.address);
	printf("\nPhone number:%d ",c.phone);
	printf("\nNo of employee: %d",c.noOFEmployee);
getch();
return 0;
}

