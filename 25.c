#include<stdio.h>
#include<conio.h>
// declaration of global variable 
int x = 20;
int func();
int main(){
	printf("The global value of x is = %d ",x);
	//modifying the value of the x inside the function;
	x = 75;
	printf("\nThe value of x after modifying inside the main function is = %d",x);
	x = func();
	printf("\nThe value of x after calling the user defined function is = %d",x);
getch();
return 0;
}
int func(){
	int val = 67;
	return val;
	
}
