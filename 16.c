#include<stdio.h>
#include<conio.h>
int main(){
	int a = 40;
	float b = 40.3;
	char c = 'D';
	double d = 205;
	long double e = 126;
	char str[] = "dimensions";
	
    printf("\nSize of a: %d",sizeof(a));
    printf("\nSize of b: %d",sizeof(b));
    printf("\nSize of c: %d",sizeof(c));
    printf("\nSize of d: %d",sizeof(d));
    printf("\nSize of e: %d",sizeof(e));
    printf("\nSize of str: %d",sizeof(str));
 
getch();
return 0;
}

