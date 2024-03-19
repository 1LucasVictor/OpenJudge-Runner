#include<stdio.h>
int main()
{
 long long int a,M;
float b;
scanf("%lld",&a);
scanf("%f",&b);
if((a<=1000000000000000)&&(b<=10))
{
M=a*b;
printf("%lld",M);
}
else
return 0;
}