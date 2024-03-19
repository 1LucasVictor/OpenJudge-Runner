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
    ll a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }
 
    int ns=n;
    int ms=m;
    ll ks=k;
    int ans=0;
 
    n=0;
    m=0;
    while(n<ns&&k>0)
    {  
        k=k-a[n];
        n=n+1;
        ans=ans+1;
    }
    if(k<0)
    {
        k=k+a[n-1];
        n=n-1;
        ans=ans-1;
    }
    while(m<ms&&k>0)
    {  
        k=k-b[m];
        m=m+1;
        ans=ans+1;
    }
    if(k<0)
    {
        k=k+b[m-1];
        m=m-1;
        ans=ans-1;
    }
    answer=ans;
 
    for(int i=1;i<n+1;i++)
    {
        k=k+a[n-1];
        n=n-1;
        ans=ans-1;
 
        while(m<ms&&k>0)
        {  
            k=k-b[m];
            m=m+1;
            ans=ans+1;
        }
        if(k<0)
        {
            k=k+b[m-1];
            m=m-1;
            ans=ans-1;
        }
 
        if(ans>answer)
        {
            answer=ans;
        }
        
    }
 
 
    printf("%d\n",answer);
 
    return 0;
}