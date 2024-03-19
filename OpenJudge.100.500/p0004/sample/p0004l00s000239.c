#include<stdio.h>
int main()
{
    long long a,b,gcd,temp,lcm;
    while(scanf("%lli %lli",&a,&b)!=EOF)
    {
    lcm=a*b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=lcm/gcd;
    printf("%lli %lli\n",gcd,lcm);
    }
    return 0;
}

