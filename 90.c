#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int binaryToDecimal(long long n){
int decimal=0,base=1,rem;
while(n>0){
rem=n%10;
decimal+=rem*base;
n/=10;
base*=2;
}
return decimal;
}
long long decimalToBinary(int n){
long long binary=0;
int rem,base=1;
while(n>0){
rem=n%2;
binary+=rem*base;
n/=2;
base*=10;
}
return binary;
}
int main(){
long long b1,b2;
int d1,d2,product;
printf("Enter two binary numbers: ");
scanf("%lld%lld",&b1,&b2);
d1=binaryToDecimal(b1);
d2=binaryToDecimal(b2);
product=d1*d2;
printf("Product: %lld\n",decimalToBinary(product));
getch();
return 0;
}

