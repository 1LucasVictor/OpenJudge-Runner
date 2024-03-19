#include<stdio.h>

int main()
{
    long long a,b,c,x,gcd,lcm;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a<b)
        {
            x=a;
        }
        else
        {
            x=b;
        }
        for(;x>=1;x--)
        {
            if(a%x==0 && b%x==0)
            {
                gcd=x;
                break;
            }
        }
        c=a*b;
        lcm=c/gcd;
        printf("%lld %lld\n",gcd,lcm);
    }
    return 0;
}