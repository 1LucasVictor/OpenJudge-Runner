#include<stdio.h>
int main()
{
int a,M;
double b;
scanf("%d",&a);
scanf("%lf",&b);
if((a<=1000000000000000)&&(b<=10))
{
M=a*b;
printf("%d",M);
}
return 0;
}