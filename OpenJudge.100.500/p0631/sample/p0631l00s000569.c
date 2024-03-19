#include<stdio.h>
int main()
{
long long a,b,x;
scanf("%lld %lld %lld",&a,&b,&x);
if (a==x || a<x && (a+b)>=x) 
printf("YES");
else
printf("NO");
}
