#include<stdio.h>
int main()
{
    long long n,a,b,sum;
    scanf("%lld",&n);
    a=n/500;
    b=(n-a*500)/5;
    sum=a*2*500+b*5;
    printf("%lld\n",sum);
    return 0;
}
