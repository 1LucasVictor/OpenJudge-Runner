#include<stdio.h>

int main()
{
    int a,b;
    long long int temp,lcm,a1,b1;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        a1=a;
        b1=b;
        while(a%b!=0)
        {
           temp=a%b;
           a=b;
           b=temp;
        }

        lcm=a1*b1/b;
        printf("%d ",b);
        printf("%lld\n",lcm);
    }
    return 0;
}

