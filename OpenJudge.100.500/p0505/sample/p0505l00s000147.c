#include <stdio.h>

int main()
{
    long long int h, n, sum = 0;
    scanf("%lld %lld", &h, &n);
    for (int i = 0; i < n; i++)
    {
        long long int a;
        scanf("%lld", &a);
        sum += a;
    }
    if (sum >= h)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
