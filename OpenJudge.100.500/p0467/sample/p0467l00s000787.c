#include<stdio.h>
int main()
{
    long long int a,b,c,k,sum;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(k<=a+b)
        sum=a;
    else
        sum=a-(k-a-b);
    printf("%lld",sum);
    return 0;
}
