#include<stdio.h>
#include<conio.h>
int main(){
	int hour,min,sec;
	printf("Enter the time in (HH:MM:SS): ");
	scanf("%d:%d:%d",&hour,&min,&sec);
	printf("The time is: %d:%d:%d",hour,min,sec);
getch();
return 0;
}

