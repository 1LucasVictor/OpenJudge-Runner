#include <stdio.h>

int main(void)
{
        int k;
        long long int a,b,c;

        scanf("%lld%lld%lld%d",&a,&b,&c,&k);
        if(k-a<=0) printf("%lld\n",k);
        else {
                if(k-a-b<=0) printf("%lld\n",a);
                else printf("%lld\n",a-(k-a-b));
        }

        return 0;
}
