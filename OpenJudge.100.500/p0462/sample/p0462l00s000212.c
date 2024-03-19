#include<stdio.h>

#define lli long long int

int main()
{
    lli a,b0;
    double b;
    scanf("%lld %lf",&a,&b);
    b *= 100;
    b0 =(lli) b;
    a *= b0;
    a /= 100;
    printf("%lld\n",a);
    return 0;
}