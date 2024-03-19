#include<stdio.h>
int main()
{
    long long int x,sum=0;
    int n_500,n_5,r;
    scanf("%lld",&x);
    n_500=x/500;
    r=x%500;
    n_5=r/5;
    sum=n_500*1000+n_5*5;
    printf("%lld",sum);
    return 0;
}