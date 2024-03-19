#include <stdio.h>
#include <stdlib.h>



int main (void)
{
    unsigned long long n,k;
    unsigned long long diff;
    unsigned long long diffmin;
    scanf("%llu %llu",&n,&k);
    diff=llabs(n);
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

    printf("%llu",diffmin);
}