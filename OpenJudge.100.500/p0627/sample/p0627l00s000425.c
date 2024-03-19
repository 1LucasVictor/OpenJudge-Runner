#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,m,n,k;

    while(~scanf("%lld %lld",&a,&b))
    {
        m=a+b;
        n=a*b;
        k=a-b;
        if(m>n&&m>=k||m>=n&&m>k||m>n&&m>k)
            printf("%lld\n",m);
            if(n>m&&n>=k||n>=m&&n>k||n>m&&n>k)
            printf("%lld\n",n);
            if(k>n&&k>=m||k>=n&&k>m||k>n&&k>m)
            printf("%lld\n",k);
            if(n==m&&m==k&&n==k)
                printf("%lld\n",n);


    }

    return 0;
}
