#include<string.h>
#include<stdio.h>
#include<conio.h>
int main(){
	char str1[20],str2[20],str3[20];
	int i= 0 ,j = 0;
	printf("Enter any string: ");
	scanf("%s",str1);
	while(str1[i]!='\0')
	{
		str2[i] = str1[i];
		i++;
	}
	printf("Copied version: %s",str2);//without using string handling function.
	strcpy(str3,str1);
	printf("Copied versio: %s",str3);
getch();
return 0;
}

