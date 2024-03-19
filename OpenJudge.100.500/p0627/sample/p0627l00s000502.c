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
        if(m>n&&m>k)
            printf("%lld\n",m);
            if(n>m&&n>k)
            printf("%lld\n",n);
            if(k>n&&k>m)
            printf("%lld\n",k);
            if(n==m&&n<k)
                printf("%lld\n",k);
            if(n==m&&n>k)
                printf("%lld\n",m);
                if(n==k&&n<m)
                printf("%lld\n",m);
                if(n==k&&n>m)
                printf("%lld\n",n);
            if(k==m&&k<n)
                printf("%lld\n",n);
                if(k==m&&k>n)
                printf("%lld\n",k);
            if(m==n&&k==n)
                printf("%lld\n",n);



    }

    return 0;
}
