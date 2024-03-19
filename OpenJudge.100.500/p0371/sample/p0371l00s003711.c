#include <stdio.h>
int main(void)
{
    int n,a,i,min,max,sum;
    sum = 0;
    min = 1000;
    max = -1000;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a);
        sum = sum + a;
        if (min > a)
        min = a;
        if (max < a)
        max = a;
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}
