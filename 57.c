#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
	 {
	 	printf("The given character is alphanumeric.");
	 }
	else{
		printf("The given character is not aplhanumeric.");
	}
	
getch();
return 0;
}

