#include<stdio.h>
#include<conio.h>
#include<time.h>
int main(){
	int u_limit,l_limit,r,i,num;
	printf("Enter upper limit: ");
	scanf("%d",&u_limit);
	printf("Enter lower limit: ");
	scanf("%d",&l_limit);
	srand(time(0));
	printf("How many numbers do you want to generate?");
	scanf("%d",&r);
	for(i = 0;i<r;i++)
	{
		num = (rand() % (u_limit - l_limit + 1)) + l_limit;
		printf("%d\t",num);
	}
getch();
return 0;
}

