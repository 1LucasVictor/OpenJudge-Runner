#include<stdio.h>
int main(){
long long int a,b,c,k;
scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
if(k==a+b || k== b+a)
{
if(a>b || b>a)
printf("%lld",a);}

else if(k==b+c || k==c+b)
{
if(b>c || c>b)
printf("0");}
else if(k==c+a || k== a+c)
{
if(c>a || a>c)
printf("0");}
return 0;
}