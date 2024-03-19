#include<stdio.h>
int main(void)
{
    long long x,temp;
    long long sum=0;
    scanf("%lld",&x);
    temp=x/500;
    sum+=temp*1000;
    x=x-temp*500;
    temp=x/5;
    sum+=temp*5;
    printf("%lld",sum);
    return 0;
}