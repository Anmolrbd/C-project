#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int n,i;
float sum=0,mean,variance=0,stddev;
printf("Enter the number of elements: ");
scanf("%d",&n);
float arr[n];
for(i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%f",&arr[i]);
sum+=arr[i];}
mean=sum/n;
for(i=0;i<n;i++)variance+=pow(arr[i]-mean,2);
variance/=n;
stddev=sqrt(variance);
printf("Mean: %.2f\n",mean);
printf("Variance: %.2f\n",variance);
printf("Standard Deviation: %.2f\n",stddev);
getch();
return 0;}

