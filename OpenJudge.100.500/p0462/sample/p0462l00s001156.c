#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, d, res;
    double b, c;
    scanf("%lld %lf", &a, &b);
    c=b*100;
    d=floor(c);
    res=a*d;
    printf("%lld\n", res/100);
    return 0;
}
