#include <stdio.h>
int main(void)
{
    int n, i, a;
    int min =  1000000;
    int max = -1000000;
    long long sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
        if ( min > a )
        {
            min = a;
        }
        if ( max < a )
        {
            max = a;
        }
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}
