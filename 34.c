#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str[100];
	int i,ch,word,length;
	printf("Enter a sentence:");
	gets(str);
	length = strlen(str) ;
	for(i = 0;i<length;i++)
	{
		if(str[i] == ' ')
		{
			word = word + 1;
		}
		else
		{
			ch = ch + 1;
		}
	}
	printf("\nTotal words: %d",(word+1));
	printf("\nTotal Characters: %d",(ch-1));
	
getch();
return 0;
}

