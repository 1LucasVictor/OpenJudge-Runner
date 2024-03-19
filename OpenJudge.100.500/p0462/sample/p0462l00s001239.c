#include <stdio.h>

int main(void)
{
    long long int  a=0,b=0,c=0,Mul=0;
    scanf("%lld %lld.%lld",&a,&b,&c);
    printf("%lld",a*((b*100)+c)/100);
    return 0;
}
