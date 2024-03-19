#include<stdio.h>
int main()
{
    long long int a,b,gcd,t,x;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
x=1;
x*=a*b;
    if(b==0)
        gcd=a;
    else if(a==0)
        gcd=b;
    else
    {
        while(b!=0)
        {
          t=b;
          b=a%b;
          a=t;
        }
        gcd=a;
    }
    printf("%lld %lld\n",gcd,x/gcd);
    }
    return 0;
}