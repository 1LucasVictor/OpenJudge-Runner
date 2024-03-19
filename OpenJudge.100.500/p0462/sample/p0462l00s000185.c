#include <stdio.h>

int main(void)
{
        long long int a;
        double b,s;

        scanf("%lld%lf",&a,&b);

        if(b>10) return 1;
        s=a*(b*100)/100;

        printf("%lld\n",(long long int)s);
        return 0;
}
