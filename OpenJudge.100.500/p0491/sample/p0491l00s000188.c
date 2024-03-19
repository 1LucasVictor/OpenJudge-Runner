#include <stdio.h>
#include <stdlib.h>



int main (void)
{
    long long n,k;
    long long diff;
    long long diffmin;
    scanf("%lld %lld",&n,&k);
    diff=n;
    diffmin=abs(diff);
    for(;;)
    {
        diff=abs(diff-k);
        // printf("%d %d\n",diffmin,diff);
        if (diffmin>diff)diffmin=diff;
        else break;

    }
    printf("%lld",diffmin);
}