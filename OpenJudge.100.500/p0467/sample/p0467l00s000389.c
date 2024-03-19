#include<stdio.h>
int main(){
long long int a,b,c,k;
scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
if(k==a+b )
{
if(a>=b || b>=a)
printf("%lld",a);}

else if(k==b+c )
{
if(b>=c || c>=b)
printf("0");}
else if(k==c+a )
{
if(c>=a || a>=c)
printf("0");}
return 0;
}