#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int n, m, k;
    int a[200000+5], b[200000+5];
    int ai=0, bi=0;
    int ans=-1;
    int af=0,bf=0;  // コンフリクト
    scanf("%d %d %d", &n, &m, &k);
    
    for(int i=0; i<n; i++)scanf("%d", &a[i]);
    for(int i=0; i<m; i++)scanf("%d", &b[i]);
    
    while(k>=0){
        if(ai==n && bi==m){
            printf("%d\n", ans+1);
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
            if(bf==1){
                af=0;
                bf=0;
                b[bi]-=b[bi-1];
                bi--;
            }
        }else if(b[bi]<a[ai]){
            // printf("%d\n", k);
            // printf("  %d\n", b[bi]);
            k-=b[bi];
            bi++;
            ans++;
            if(af==1){
                af=0;
                bf=0;
                a[ai]-=b[ai-1];
                ai--;
            }
        }else{
            a[ai+1]+=a[ai];
            b[bi+1]+=b[bi];
            ai++;
            bi++;
            ans++;
            af+=1;
            bf+=1;
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}
