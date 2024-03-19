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
    diff=diff%k;
    if (diffmin>diff)
    {
    diffmin=diff;

    for(;;)
    {
        diff=llabs(diff-k);

        if (diffmin>diff)diffmin=diff;
        else break;

    }
    }
    
    printf("%lld",diffmin);
}