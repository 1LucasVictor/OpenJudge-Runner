#include <stdio.h>
#include <string.h>

int main (void)
{
    int n,m,k,i,ans=0;
    long sum=0,asum=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[n+1],b[m+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        asum+=a[i];
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }
    b[0]=0;
    int j=n;
    for(i=0;i<=m;i++)
    {
        sum+=b[i];
        if(sum>k)
        {
            break;
        }
        long ksum=sum+asum;
        while(ksum>k&&j>0)
        {
            ksum-=a[j];
            asum-=a[j];
            j--;
        }
        if(ans<i+j)
        {
            ans=i+j;
        }
    }
    printf("%d\n",ans);
    return 0;
}
