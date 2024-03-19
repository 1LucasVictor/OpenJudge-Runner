#include <stdio.h>
int main()
{
    int a, b, c, k;
    int result;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    if (k <= a)
    {
        result = k;
    }
    else if (k <= (a + b))
    {
        result = a;
    }

    else
    {
        result = a - (k - (a + b));
    }

    printf("%d", result);

    return 0;
}