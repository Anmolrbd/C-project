#include<stdio.h>
#include<conio.h>
int main(){
int ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	 {
	 	printf("The given character is digit.");
	 }
	else{
		printf("The given character is not digit.");
	}
getch();
return 0;
}

