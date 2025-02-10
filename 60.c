#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' )
	{
		if(ch>=65 && ch<=90 )
		{
			printf("The given alphabet is in Uppercase.");
		}
		else
		{
			printf("The given alphabet is in Lowercase");
		}	
	}
	else
	{
		printf("Invalid charachter.");
	}
getch();
return 0;
}

