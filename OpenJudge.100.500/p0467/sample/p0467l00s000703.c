#include <stdio.h>

int main(void)
{
        int k;
        long long int a,b,c,s;

        scanf("%lld%lld%lld%d",&a,&b,&c,&k);
        if(k<=a) s=a;
        else {
                s=a;
                k=k-a-b;
                if(k>0) s=s-k;
        }

        printf("%lld\n",s);
        return 0;
}
