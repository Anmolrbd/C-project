#include<stdio.h>
#include<conio.h>
int main(){
	int num,count=0,i=0,num_holder[100];
	while(num!=-1)
	{
	printf("Enter an number(input -1 to stop): ");
	count += scanf("%d",&num);
	num_holder[i++] = num;
}
printf("The total number of input taken is = %d",count);
printf("\nEnterd numbers are: \n");
for(i = 0;i<count;i++)
{
	printf("%d ",num_holder[i]);
}
	
getch();
return 0;
}
