#include<stdio.h>
int main()
{
long long int a;  
long double b;
scanf("%lld %llf",&a,&b);
int k=b*100;
long long int c;
  c=a*k;
  c=c/100;
printf("%lld",c);
  
return 0;
}