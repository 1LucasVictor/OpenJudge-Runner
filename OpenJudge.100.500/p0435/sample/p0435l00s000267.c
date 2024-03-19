#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0;
    long long distance, num;

    scanf("%lld %lld", &num, &distance);
    distance = distance * distance;

    long long x, y;

    while (num--)
    {
        scanf("%lld %lld", &x, &y);
        x = (x * x) + (y * y);
        if (distance >= x)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}