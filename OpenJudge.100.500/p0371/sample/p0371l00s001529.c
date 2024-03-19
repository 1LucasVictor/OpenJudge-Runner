#include <stdio.h>

int main()
{
    int a, x, k = 100000000, g = -100000000;
    long long sum = 0;
    scanf("%d\n", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &x);
        sum = sum + x;
  
        if (x < k)
            k = x;

        if (x > g)
            g = x;
    }

    printf("%d %d %lli\n", k, g, sum);

    return 0;
}
