#include<stdio.h>
#include<conio.h>
int fact(int n){
int f=1,i;
for(i=1;i<=n;i++)
f*=i;
return f;
}
int main(){
int n,r,nPr;
printf("Enter n and r: ");
scanf("%d%d",&n,&r);
nPr=fact(n)/fact(n-r);
printf("nPr: %d\n",nPr);
getch();
return 0;
}

