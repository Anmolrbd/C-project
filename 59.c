#include<stdio.h>
#include<conio.h>
int main(){
int ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if((ch == ' ') || (ch == '\t') || (ch == '\n') || (ch == 'v') || (ch == '\r') || (ch == '\f'))
	 {
	 	printf("The given character is white space.");
	 }
	else{
		printf("The given character is not white space.");
	}
getch();
return 0;
}

