#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define rep(i, n) for(int i=0; i<n; i++)
int main(void){
    int n, m, k;
    int a[200000+5], b[200000+5];
    
    scanf("%d %d %d", &n, &m, &k);
    
    rep(i,n)scanf("%d", &a[i]);
    rep(i,m)scanf("%d", &b[i]);
    
    long long int t=0;
    
    rep(i, m)t+=b[i];
    
    int ans=0;
    int j=m;
    rep(i, n+1){
        while(k<t && 0<j){
            t-=b[j-1];
            j--;
        }
        if(k<t)break;
        if(ans<i+j)ans=i+j;
        if(i==n)break;
        t+=a[i];
    }
    
    
    printf("%d\n", ans);
    
    return 0;
}
