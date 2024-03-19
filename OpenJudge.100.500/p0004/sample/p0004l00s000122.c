#include <stdio.h>

int main()
{
    long long int a, b, x, y, t, gcd, lcm;

    while(scanf("%lld %lld", &a, &b)!= EOF){
        x=a;
        y=b;

        while(y!=0){
            t=y;
            y=x%y;
            x=t;
        }
        gcd=x;
        lcm=a*b/gcd;
        printf("%lld %lld\n", gcd, lcm);
    }
    return 0;
}