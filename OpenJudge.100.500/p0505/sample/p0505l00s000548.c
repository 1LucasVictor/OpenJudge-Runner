#include<stdio.h>
int main(void)
{
    long int h,n,a[10000],i,sum = 0;
    scanf("%ld %ld",&h,&n);
    for(i = 1 ; i <= n ; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i = 1 ; i <= n ; i++)
    {
        sum += a[i];
    }
    if(sum >= h)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}