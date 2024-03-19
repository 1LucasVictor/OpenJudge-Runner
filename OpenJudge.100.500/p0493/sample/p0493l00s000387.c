#include<stdio.h>
int main(void)
{
    int x,temp;
    long long sum=0;
    scanf("%d",&x);
    temp=x/1000;
    sum+=temp*2000;
    x=x-temp*1000;
    temp=x/5;
    sum+=temp*5;
    printf("%lld",sum);
    return 0;
}