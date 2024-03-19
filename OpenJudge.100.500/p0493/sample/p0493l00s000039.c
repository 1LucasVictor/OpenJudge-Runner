#include<stdio.h>
int main()
{
    long long int x,a,b;
    scanf("%lld",&x);

    a = x/500;
    x = x-(a*500);
    b = x/5;

    printf("%lld\n",(1000*a+5*b));

    return 0;
}
