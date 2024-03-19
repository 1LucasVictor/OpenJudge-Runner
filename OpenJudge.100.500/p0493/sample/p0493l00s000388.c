#include<stdio.h>
int main(){
  long long int n;
scanf("%lld",&n);
long long int a,b;
a = n/500;
b=(n-500*a)/5;
printf("%lld",(a*1000)+(5*b));
  return 0;
}
