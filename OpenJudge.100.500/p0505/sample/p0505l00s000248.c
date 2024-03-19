#include<stdio.h>
int main()
{
    int h, n, a[10000], i, sum=0;
    scanf("%d%d", &h, &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    if(sum >=h)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}