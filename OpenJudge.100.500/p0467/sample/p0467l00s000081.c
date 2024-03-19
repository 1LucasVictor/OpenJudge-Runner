#include<stdio.h>
int main()
{
    long long int a,b,c,k;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
    long long int sum=0;
    if(k<=a)
    {
        sum+=a;
    }else{
        sum+=a;
        k=k-(a+b);
        if(k>0)
        {
            sum-=k;
        }
    }
    printf("%lld",sum);
    return 0;
}
