#include <stdio.h>

int main()
{
    unsigned long long int n, k, x1, x2;

    scanf("%llu%llu", &n, &k);

    x1 = n % k;

    if (x1 > k)
        x2 = x1 - k;
    else 
        x2 = k - x1;
    
    printf("%d\n", x1 < x2 ? x1 : x2);

    return 0;
}