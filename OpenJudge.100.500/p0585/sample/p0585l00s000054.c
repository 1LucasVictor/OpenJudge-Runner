#include <stdio.h>
int main()
{
    int a, b, t;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &t);
    for (; t >= a;)
    {
        t = t - a;
        sum = sum + b;
    }
    printf("%d\n", sum);
    return 0;
}
