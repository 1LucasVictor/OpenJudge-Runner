#include <stdio.h>
#include <stdlib.h>
int asc(const void *a, const void *b)
{
    return *(long int *)a - *(long int *)b;
}
int dis(const void *a, const void *b)
{
    return *(long int *)b - *(long int *)a;
}
int main()
{
    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);
    if (a % k == 0 || b % k == 0 || b / k > a / k)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}