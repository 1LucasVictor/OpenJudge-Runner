#include<stdio.h>
int main()
{
    long long int m,n,a,x,count=0;
    scanf("%lld %lld",&m,&n);
    a=m%n;
    x=n/2;
    if(a>x)
        a=n-a;
    printf("%lld",a);
}
