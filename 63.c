#include<stdio.h>
#include<conio.h>
int main(){
	struct std_details{
		int roll,age,marks[3];
		char name[20],address[30];
	};
	struct std_details sdet[3];
	int i,j,sum[3],avg[3];
	char sub[3][20] = {"Physics","Math",'C'};
	for(i=0;i<3;i++)
	{
		printf("Enter Name: ");
		scanf("%s",sdet[i].name);
		printf("Enter Roll No: ");
		scanf("%d",&sdet[i].roll);
		printf("Enter address: ");
		scanf("%s",sdet[i].address);
		printf("Enter age: ");
		scanf("%d",&sdet[i].age);
		for(j=0;j<3;j++)
		{
			printf("Enter marks in %s: ",sub[j]);
			scanf("%d",&sdet[i].marks[j]);
		}
	}
	printf("\n--------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i] = sum[i] + sdet[i].marks[j];
		}
		avg[i] = sum[i]/3;
		printf("Name: %s",sdet[i].name);
		printf("\nAge: %d",sdet[i].age);
		printf("\nRoll No: %d",sdet[i].roll);
		printf("\nAddress: %s",sdet[i].address);
		printf("\nAvg marks: %d\n",avg[i]);
		printf("\n--------------------------\n");

	}
getch();
return 0;
}

