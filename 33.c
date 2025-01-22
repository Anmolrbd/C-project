#include<stdio.h>
#include<conio.h>
int main(){
	char str[10];
	int i,j,count=0,nequal=0;
	printf("Enter any string: ");
	scanf("%s",&str);
	while(str[i]!='\0')
	{
		count =  count + 1;
		i++;
	}
	for(i = 0,j=count-1;i<count ; i++,j--)
	{
		if(str[i]!=str[j])
		{
			nequal = nequal + 1;
		}
	}
	if(nequal == 0)
	{
		printf("Palindrome.");
	}
	else 
	{
		printf("Not Palindrome.");

	}
getch();
return 0;
}

