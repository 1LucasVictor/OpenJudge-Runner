#include <stdio.h>
#include <math.h>

int main()
{
    int n, d, i, count = 0;
    double x, y, distance;

    scanf("%d %d", &n, &d);

    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x, &y);

        distance = sqrt(pow(x, 2) + pow(y, 2));

        if(distance <= d)
            count++;
    }

    printf("%d", count);

    return 0;
}
