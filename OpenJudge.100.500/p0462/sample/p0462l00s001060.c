#include<stdio.h>
#include<math.h>
int main()
{
    long long a;
    double b;
    long long p;
    scanf("%lld%lf",&a,&b);
    p = floor(a*b);
    printf("%lld",p);
    return 0;
}