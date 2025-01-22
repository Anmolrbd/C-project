#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	printf("Enter string 1: ");
	scanf("%s",str1);
	printf("Enter string 2: ");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("Concatenated version: %s",str1);
getch();
return 0;
}

