#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[20],c;
	printf("Enter name: ");
	scanf("%s",name);
	printf("Is she married?(Y/N): ");
	scanf(" %c",&c);
	toupper(c);
	if(c=='Y')
	{
		printf("\nHello Mrs. %s",name);
	}
	else
	{
		printf("\nHello Miss %s",name);
	}
getch();
return 0;
}

