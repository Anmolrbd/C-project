#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter the age of the person:");
	scanf("%d",&age);
	if(age >=18)
	printf("Eligible for voting.");
	else
	printf("Not eligible for voting.");
getch();
return 0;
}

