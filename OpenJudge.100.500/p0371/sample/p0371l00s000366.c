#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int i, a, min = 1000001, max = -1000001;
    long long sum = 0;

    for(i = 0; i < n; ++i)
    {
        scanf("%d", &a);

        if(min > a)
        {
            min = a;
        }

        else if(max < a)
        {
            max = a;
        }

        sum += a;
    }

    printf("%d %d %lld\n", min, max, sum);

    return 0;
}