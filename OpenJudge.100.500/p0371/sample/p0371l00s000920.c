#include <stdio.h>

int main()
{
    int a, b, min =10000000000, max = -10000000000;
    long long sum = 0;

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        sum = sum + b;
        if (b < min)
            min = b;
        if (b > max)
            max = b;
    }
    printf("%d %d %lli\n", min, max, sum);

    return 0;
}
