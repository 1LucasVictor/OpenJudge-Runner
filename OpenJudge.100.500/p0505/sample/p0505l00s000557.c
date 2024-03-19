#include<stdio.h>
int main()
{
    int n, a[100000], i;
    long long int h, sum=0;
    scanf("%lld%d", &h, &n);
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