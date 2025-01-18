#include<stdio.h>
#include<conio.h>
int main(){
	float feet,inches;
	printf("Enter feet: ");
	scanf("%f",&feet);
	inches = feet * 12 ;
	printf("The value in inches is %.3f",inches);
getch();
return 0;
}

