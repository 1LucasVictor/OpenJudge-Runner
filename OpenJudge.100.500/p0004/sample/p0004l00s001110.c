#include<stdio.h>

int main()
{
    long long int a,b;
    long long int temp,gcd,lcm,a1,b1;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        a1=a;
        b1=b;
        while(a%b!=0)
        {
           temp=a%b;
           a=b;
           b=temp;
        }
        gcd=b;
        lcm=a1*(b1/gcd);
        printf("%lld ",gcd);
        printf("%lld\n",lcm);
    }
    return 0;
}

