#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{
    

    int n,m;
    int ans=0;
    ll k;
    scanf("%d %d %lld",&n,&m,&k);
    ll a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }

    for(int i=0;i<m+1;i++)
    {
        int as=0;
        int l=k;
        int ma=0;
        int na=0;
        while(l>0&&ma<i)
        {
            l=l-b[ma];
            ma=ma+1;
            as=as+1;
        }
        while(l>0&&na<n)
        {
            l=l-a[na];
            na=na+1;
            as=as+1;
        }
        if(l<0)
        {
            as=as-1;
        }
        ans=fmax(ans,as);
    }

    printf("%d\n",ans);

    return 0;
}