#include<stdio.h>
int main ()
{
    double b;
    long long a,x;
    scanf("%lld",&a);
    scanf("%lf",&b);
    x=a*(b*100+0.001);
    printf("%lld", x/100);
    return 0;
}
