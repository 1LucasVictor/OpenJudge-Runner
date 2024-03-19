#include<stdio.h>
int main(void)
{
    long long int n,k,a,b,c;
    scanf("%lld %lld",&n,&k);
    a = n % k;
    b = k - a;
    if(a < b)
    {
        printf("%lld",a);
        return 0 ;
    }
    else
    {
        printf("%lld",b);
        return 0 ;
        
    }
    
    return 0 ;
}