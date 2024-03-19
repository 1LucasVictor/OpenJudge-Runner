#include<stdio.h>

int main()
{
    long long int x,h,n;
    scanf("%lld",&x);
    n=x/500;
    h=n*1000;
    n=(x%500)/5;
    h+=n*5;
    printf("%lld",h);
    return 0;
}
