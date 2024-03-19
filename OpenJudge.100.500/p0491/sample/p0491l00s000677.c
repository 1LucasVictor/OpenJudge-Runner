#include <stdio.h>
#include <stdlib.h>



int main (void)
{
    long long n,k;
    long long diff;
    long long diffmin;
    scanf("%lld %lld",&n,&k);
    diff=n;
    diffmin=llabs(diff);
    for(;;)
    {
        diff=llabs(diff-k);
        // printf("%d %d\n",diffmin,diff);
        if (diffmin>diff)diffmin=diff;
        else break;

    }
    printf("%lld",diffmin);
}