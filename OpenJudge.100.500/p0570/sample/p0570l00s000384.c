#include<stdio.h>

int main()
{
    long long int a,b;
    double c;

    scanf("%lld %lld",&a,&b);

    c=(a+b)/2;
    a=(a+b)/2;

    if(c-a==0) printf("%.0lf\n",c);
    else printf("IMPOSSIBLE\n");

    return 0;
}
