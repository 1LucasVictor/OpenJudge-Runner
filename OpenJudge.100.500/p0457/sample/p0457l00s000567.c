#include <stdio.h>
#include <stdlib.h>
int main()
{   long long n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    long long a[n],b[m];
    scanf("%lld",&a[0]);
    for(int i=1;i<n;i++){
        long long tmp;
        scanf("%lld",&tmp);
        a[i]=a[i-1]+tmp;
    }
    scanf("%lld",&b[0]);
    for(long long i=1;i<m;i++){
        long long tmp;
        scanf("%lld",&tmp);
        b[i]=b[i-1]+tmp;
    }
    long long j=m-1;
    long long ans=0;
    if(a[n-1]+b[m-1]<=k){
        printf("%lld",n+m);
        return 0;
    }
    for(long long i=0;i<n;i++){
        if(a[i]<=k){
            for(;a[i]+b[j]>k;j--){
            }
            if(i+j+2>ans&&a[i]+b[j]<=k){
                //printf("i=%d j=%d\n",i,j);
                ans=i+j+2;
            }
        }
    }
    printf("%lld",ans);
    
    return 0;
}
