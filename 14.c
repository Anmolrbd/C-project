#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int exp,base,result;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exp);
	result = pow(base,exp);
	printf("The result of %d ^ %d is = %d",base,exp,result);
	
getch();
return 0;
}

