#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

        long long int a,b,c,k,r;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
        if(k<a)
            printf("%lld",k);
        else if(k<=a+b)
            printf("%lld",a);
        else{
            r = k - (a+b);
            a = a - r;
            printf("%lld",a);
        }

    return 0;
}