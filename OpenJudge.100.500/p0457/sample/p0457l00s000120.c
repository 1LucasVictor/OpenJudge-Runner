#include <stdio.h>
#include <stdlib.h>
int main()
{   long long n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    long long a[n+1],b[m+1];
    a[0]=0;
    b[0]=0;
    scanf("%lld",&a[1]);
    for(int i=2;i<=n;i++){
        long long tmp;
        scanf("%lld",&tmp);
        a[i]=a[i-1]+tmp;
    }
    scanf("%lld",&b[1]);
    for(long long i=2;i<=m;i++){
        long long tmp;
        scanf("%lld",&tmp);
        b[i]=b[i-1]+tmp;
    }
    long long j=m;
    long long ans=0;
    for(int i=0;i<=m;i++){
        if(a[0]+b[i]<=k){
            ans=i;
            j=i;
        }else{
            break;
        }
    }
    if(a[n]+b[m]<=k){
        printf("%lld",n+m);
        return 0;
    }
    for(long long i=1;i<=n;i++){
        while(a[i]+b[j]>k){
            j--;
        }
            if(i+j>ans&&a[i]+b[j]<=k){
                //printf("i=%lld j=%lld\n",i,j);
                ans=i+j;
            }
    }
    printf("%lld",ans);
    
    return 0;
}
