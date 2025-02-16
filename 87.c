#include<stdio.h>
#include<conio.h>
int main(){
int x,y;
printf("Enter x and y coordinates: ");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
printf("Point is in First Quadrant\n");
else if(x<0&&y>0)
printf("Point is in Second Quadrant\n");
else if(x<0&&y<0)
printf("Point is in Third Quadrant\n");
else if(x>0&&y<0)
printf("Point is in Fourth Quadrant\n");
else if(x==0&&y==0)
printf("Point is at Origin\n");
else if(x==0)
printf("Point is on Y-axis\n");
else printf
("Point is on X-axis\n");
getch();
return 0;}

