#include <stdio.h>
#include <string.h>

int main (void)
{
    int n,m,k,i,ans=0;
    long sum=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[n+1],b[m+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }
    b[0]=0;
    for(i=0;i<=m;i++)
    {
        sum+=b[i];
        if(sum>k)
        {
            break;
        }
        long ksum=sum;
        int j=0;
        while(ksum<=k&&j<=n)
        {
            j++;
            ksum+=a[j];
        }
        if(ans<i+j-1)
        {
            ans=i+j-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
