#include<stdio.h>
int main()
{
    long long int h,n;
    scanf("%lld%lld",&h,&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    if((h-sum) >0)
    {
        printf("No\n");
    }
    else
        printf("Yes\n");












    return 0;
}
