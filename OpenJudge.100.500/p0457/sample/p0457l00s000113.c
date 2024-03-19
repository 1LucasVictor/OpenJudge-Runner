#include<stdio.h>

#define int long long

signed main(void)
{
    int a[200001];
    int b[200001];
    
    int n,m,k,o,p;
    o=0;
    p=0;
    
    for(int i=0;i<200001;i++){
        a[i]=0;
        b[i]=0;
    }
    scanf("%lld %lld %lld",&n,&m,&k);
    
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    
    for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }
    
    for(int i=0;i<n+m;i++){
        if(k<a[o]&&k<b[p]){
            printf("%lld",p+o);
            return 0;
        }
        
        if(a[o]<=b[p]){
            k-=a[o];
            o++;
        }else{
            k-=b[p];
            p++;
        }
        if(k<a[o]&&k<b[p]){
            printf("%lld",p+o);
            return 0;
        }
    }
    printf("%lld",n+m);
}
