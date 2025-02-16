#include<stdio.h>
#include<conio.h>
int fact(int n){
int f=1,i;
for(i=1;i<=n;i++)
f*=i;
return f;
}
int main(){
int n,r,nCr;
printf("Enter n and r: ");
scanf("%d%d",&n,&r);
nCr=fact(n)/(fact(r)*fact(n-r));
printf("nCr: %d\n",nCr);
getch();
return 0;
}

