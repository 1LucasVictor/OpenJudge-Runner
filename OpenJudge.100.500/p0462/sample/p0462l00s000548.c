#include<stdio.h>
int main()
{
    double b;
    double a;
    long long int c;

    scanf("%lf %lf",&a,&b);
    c = (long long int)(a*b);

    printf("%lld\n",c);
    return 0;
}
