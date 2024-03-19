#include <stdio.h>
#include <math.h>

int main()
{
    long long int a,c;
    long double b;
    scanf("%lld %Lf",&a,&b);
    b=b*100;
    c=a*b/100;
    c=round(c);
    printf("%lld",c);
    return 0;
}