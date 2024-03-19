#include<stdio.h>
int main()
{
    long long int a,b,c,k,sum,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    d=k-(a+b);
    if(k<=a+b)
        sum=a;
    else
        sum=a-d;
    printf("%lld\n",sum);
    return 0;
}
