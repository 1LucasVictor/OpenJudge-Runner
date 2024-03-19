#include <stdio.h>

int main(void)
{
    double n, d, x, y;
    int i, count = 0;
    scanf("%lf %lf", &n, &d);

    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x, &y);

        if (x * x + y * y <= d * d)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}