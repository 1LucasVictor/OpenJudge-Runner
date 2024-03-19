#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    unsigned int n, m;
    int k;
    int a[200000+5], b[200000+5];
    int ai=0, bi=0;
    int ans=-1;
    
    scanf("%d %d %d", &n, &m, &k);
    
    for(int i=0; i<n; i++)scanf("%d", &a[i]);
    for(int i=0; i<m; i++)scanf("%d", &b[i]);
    
    while(k>=0){
        if(ai==n && bi==m){
            // printf("%d\n", ans+1);
            return 0;
        }else if(ai==n){    // Aに本が無いなら強制的にBを読む
            // printf("  %d\n", b[bi]);
            k-=b[bi];
            bi++;
            ans++;
        }else if(bi==m){
            // printf(" %d\n", a[ai]);
            k-=a[ai];
            ai++;
            ans++;
        }else if(a[ai]<b[bi]){ // aの方が小さい
            // printf("%d\n", k);
            // printf(" %d\n", a[ai]);
            k-=a[ai];
            ai++;
            ans++;
        }else{
            // printf("%d\n", k);
            // printf("  %d\n", b[bi]);
            k-=b[bi];
            bi++;
            ans++;
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}
