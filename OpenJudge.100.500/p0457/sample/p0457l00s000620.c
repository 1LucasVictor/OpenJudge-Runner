#include<stdio.h>
#define ll long long int
int main()
{
   ll n,m,k;
   scanf("%lld%lld%lld",&n,&m,&k);
   ll a[n+1],b[m+1];
    for(int i=0;i<n;i++)
     scanf("%lld",&a[i]);
    for(int i=0;i<m;i++)
     scanf("%lld",&b[i]);
    ll ans=0,j=0,l=0,cnt=0;
    while(ans<k&&(j<n||l<m))
    {
        if(a[j]<b[l]&&j<n)
        {
            ans+=a[j];
            j++;
            cnt++;
        }
        else if(l<m)
        {
            ans+=b[l];
            l++;
            cnt++;
        }
        //printf("%lld\n",ans);
    }
    if(ans==k)
      printf("%lld",cnt);
   else if(cnt!=0)
     printf("%lld",cnt-1);
    
    else
     printf("0");
    
}