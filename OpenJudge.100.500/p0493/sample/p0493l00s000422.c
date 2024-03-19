#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,x,h=0;
    scanf("%lld",&x);
    a = x/500;
    h += a*1000;
    x = x%500;
    b = x/5;
    h += b*5;
    printf("%lld",h);
    return 0;
}