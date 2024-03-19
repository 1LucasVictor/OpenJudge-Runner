#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,m,n,k;

    while(~scanf("%lld %lld",&a,&b))
    {
        long long int max=-1000000000;

        m=a+b;
        n=a*b;
        k=a-b;
         if(m>max)
            max=m;
        if(n>max)
            max=n;
        if(k>max)
            max=k;
            printf("%d\n",max);

    }

    return 0;
}
