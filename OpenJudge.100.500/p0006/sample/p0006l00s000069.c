#include <stdio.h>

int main(int argc, const char * argv[])
{

    long long week;
    long long i;
    long long raise;
    long long buget = 100000;
    
    scanf("%lld",&week);
    for (i = 0; i < week; i++) {
        buget = buget + buget * 0.05;
        //printf("%lld\n",buget);
        raise = buget % 1000;
        //printf("%lld\n",raise);
        if (raise != 0) {
            buget -= raise;
            buget += 1000;
        }
    }
    printf("%lld\n",buget);
    return 0;
}