#include<stdio.h>
int main()
{
    int i,n,a;
    long long int h, sum = 0;
    scanf("%lld %d", &h,&n);
    for(i = 1;i<=n;i++)
    {
        scanf("%d", &a);
        sum = sum+a;
    }
    if(sum >= h)
        printf("Yes\n");
    else
        printf("No\n");
}
