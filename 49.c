#include<stdio.h>
#include<conio.h>
int main(){
	float dist;
	printf("Enter distance in KM: ");
	scanf("%f",&dist);
	printf("Distance in meters: %.3f",(dist*1000));
	printf("\nDistance in centimeters: %.3f",(dist*10000));
	printf("\nDistance in feet: %.3f",(dist*3280.84));
	printf("\nDistance in inches: %.3f",(dist*39370.1));
getch();
return 0;
}

