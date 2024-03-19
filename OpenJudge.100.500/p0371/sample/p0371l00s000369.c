//min, max, sum
#include <stdio.h>

int main(void)
{
    int n;
    int i, min, max;
    long sum;
    scanf("%d%d",&n,&i);
    min = max = sum = i;
    for (; n>1; n--)
    {
        scanf("%d",&i);
        if (i < min)
        {
            min = i;
        }
        if (i > max)
        {
            max = i;
        }
        sum += i;
    }
    printf("%d %d %ld\n",min,max,sum);
    //printf("%d %d",n,i);
    return 0;
}

