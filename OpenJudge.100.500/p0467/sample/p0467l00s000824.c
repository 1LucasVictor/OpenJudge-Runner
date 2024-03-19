#include <stdio.h>

int main(void)
{
        int k;
        long a,b,c,s;

        scanf("%ld%ld%ld%d",&a,&b,&c,&k);
        if(k<=a) s=a;
        else {
                s=a;
                k=k-a-b;
                if(k>0) s=s-k;
        }

        printf("%ld\n",s);
        return 0;
}
