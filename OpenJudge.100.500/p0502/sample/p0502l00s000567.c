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
    int n;
    int a;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0 && (a % 3) * (a % 5) != 0)
        {
            break;
        }
    }
    if (i == n)
    {
        printf("APPROVED");
    }
    else
    {
        printf("DENIED");
    }
    return 0;
}