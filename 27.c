#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter number is decimal number system: ");
	scanf("%d",&num);
	printf("\nOctal format: %o",num);
	printf("\nDecimal format: %d",num);
	printf("\nHexadecimal format(Uppercase): %X",num);
	printf("\nHexadecimal format(Lowercase): %x",num);
getch();
return 0;
}

