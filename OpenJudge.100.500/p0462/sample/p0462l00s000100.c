#include<stdio.h>
int main()
{
 long long int a,M;
double b;
scanf("%lld",&a);
scanf("%lf",&b);
if((a<=1000000000000000)&&(b<=10))
{
M=a*b;
printf("%lld",M);
}
return 0;
}