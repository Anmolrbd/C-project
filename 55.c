#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter any character: ");
	scanf(" %c",&ch);
	if(ch>='0' && ch<='9')
	printf("\nThe character is digit.");
	else
	printf("\nThe character is not digit.");
getch();
return 0;
}

