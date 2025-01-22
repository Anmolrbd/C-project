#include <stdio.h>
#include<conio.h>
int main() {
	int n,i,num[n],*ptr,sum = 0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&num[i]);
	}
	ptr = num;
	for(i = 0 ; i<n;i++)
	{
		sum += *(ptr+i);
	}
	printf("\nThe sum of the entered elements is %d",sum);
	getch();
    return 0;
}

