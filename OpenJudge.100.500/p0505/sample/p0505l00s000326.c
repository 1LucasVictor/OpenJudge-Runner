#include<stdio.h>
int main()
{
    int h, n, i, sum;
    sum = 0;
    int a[100000];
    scanf("%d%d", &h, &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0;i < n;i++)
    {
        sum += a[i];
    }
    if (sum >= h)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}