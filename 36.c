#include<stdio.h>
#include<conio.h>
int main(){
	char str[]= "UNIVERSITY";
	int i,j;
	for(i = 0;i<5;i++)
	{
		for(j = 0;j<2*i + 2 ;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	for(i = 5;i>0;i--)
	{
		for(j = 0 ; j<2*i - 2;j++)
		{
			printf("%c",str[j]);	
		}
		printf("\n");
	}
getch();
return 0;
}

