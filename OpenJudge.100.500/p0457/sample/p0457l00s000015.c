#include<stdio.h>
#include<math.h>
typedef long long int ll;
int main()
{
    ll m,n,k,max,lcount,rcount,x;
    scanf("%lld %lld %lld",&n,&m,&k);
    ll stack1[n],stack2[m],prev=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&x);
        stack1[i]=prev+x;
        prev=stack1[i];
    }
    prev=0;
    for(int i=0;i<m;i++)
    {
        scanf("%lld",&x);
        stack2[i]=prev+x;
        prev=stack2[i];
    }
    lcount=n,rcount=m;
    for(int i=0;i<n;i++)
    {
        if(stack1[i]>k)
        {
            lcount=i;
            break;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(stack2[i]>k)
        {
            rcount=i;
            break;
        }
    }
    max=lcount>rcount?lcount:rcount;
    if(max==0)printf("0\n");
    else 
    {
        ll j=0;
        for(ll i=lcount-1;i>0;i--)
        {
            for(;j<rcount;j++)
            {
                if(stack2[j]+stack1[i]>k)
                break;
            }
            max=i+j+1>max?i+j+1:max;
        }
        printf("%lld\n",max);
    }
}
