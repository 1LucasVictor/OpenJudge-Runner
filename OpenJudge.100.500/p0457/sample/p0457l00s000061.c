#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{
    

    int n,m;
    int answer=0;
    ll k;
    scanf("%d %d %lld",&n,&m,&k);
    ll a[n+1],b[m+1];
    a[0]=0;
    b[0]=0;
    for(int i=1;i<n+1;i++)
    {
        scanf("%lld",&a[i]);
        a[i]=a[i]+a[i-1];
    }
    for(int i=1;i<m;i++)
    {
        scanf("%lld",&b[i]);
        b[i]=b[i]+b[i-1];
    }

    ll ks=k;

    for(int i=0;i<n+1;i++)
    {
        k=ks;
        k=k-a[i];
        if(k<0)
        {
            break;
        }
        int j=0;
        while(k-b[j+1]>=0&&j<m)
        {
            j=j+1;
        }
        int ans=i+j;
        if(answer<ans)
        {
            answer=ans;
        }
    }

    printf("%d\n",answer);

    return 0;
}