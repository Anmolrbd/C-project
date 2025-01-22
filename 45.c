#include<stdio.h>
#include<conio.h>
int main(){
	int a,*p;
	p = &a;
	printf("Address using & operator: %d",&a);
	printf("\nAddress using pointer: %d",p);
getch();
return 0;
}

