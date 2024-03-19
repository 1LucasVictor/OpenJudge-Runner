#include<stdio.h>
int main()
{
    int n,a[1000000],i,ans[1000000];
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        ans[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}
