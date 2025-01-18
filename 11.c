#include<stdio.h>
#include<conio.h>
int main(){
	float sub1,sub2,sub3,per,total;
	printf("Enter your marks in three subjects:");
	scanf("%f %f %f",&sub1,&sub2,&sub3);
	total = sub1 + sub2 + sub3;
	per = (total/300)*100;
	if(per>=60)
	printf("First divison.");
	else if(per>=50 && per<60)
	printf("Second divison.");
	else if(per>=40 && per<50)
	printf("Third divison.");
	else
	printf("Fail.");
getch();
return 0;
}

