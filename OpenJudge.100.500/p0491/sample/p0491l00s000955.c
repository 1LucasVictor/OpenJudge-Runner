#include <stdio.h>
#include <stdlib.h>



int main (void)
{
    long int n,k;
    long int diff;
    long int diffmin;
    scanf("%d%d",&n,&k);
    diff=n;
    diffmin=diff;
    for(;;)
    {
        diff=abs(diff-k);
        // printf("%d %d\n",diffmin,diff);
        if (diffmin>diff)diffmin=diff;
        else break;

    }
    printf("%d",diffmin);
}