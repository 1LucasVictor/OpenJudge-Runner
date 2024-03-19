#include <stdio.h>
int main()
{
    long long  a, b, gcd, lcm, t, x, y;
    while((scanf("%lld %lld", &a, &b))!=EOF){
            x=a;
            y=b;
        if(a==0) gcd=b;
        else if(b==0) gcd=b;
        else{
            while(b!=0){
                t=b;
                b=a%b;
                a=t;
            }
          gcd=a;
        }
        lcm=(x*y)/gcd;
        printf("%lld %lld\n",gcd,lcm);
    }
    return 0;
}