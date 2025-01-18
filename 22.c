#include<stdio.h>
#include<conio.h>

int var1 =120;
void global(void);

int main(){
int var1 = 30, var2 = 40;
printf("Inside of the main function: \n var1 = %d\t var2 = %d",var1,var2);
global();
printf("\nInside of the main function after calling the global fucntion: \n var1 = %d\t var2 = %d",var1,var2);
getch();
return 0;
}
void global(void)
{
	int var2 = 70;
	printf("\nInside of the declared function: \n var1 = %d\t var2 = %d",var1,var2);
	
}
