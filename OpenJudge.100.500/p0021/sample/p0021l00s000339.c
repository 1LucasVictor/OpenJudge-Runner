#include <stdio.h>
#include <string.h>

#define INF 1000000000

int n, a[5010], dp[5010];

int max(int a, int b){
    return a > b ? a : b;
}

int main(void){
    int x;
    while(scanf("%d", &n) && n){
        for(x = 0; x < n; x++){
            scanf("%d", a+x);
        }
        memset(dp, -INF, sizeof(dp));  
        dp[0] = a[0];
        int ans = -INF;
        for(x = 1; x < n; x++){
            dp[x] = max(a[x], dp[x-1] + a[x]);
            ans = max(ans, dp[x]);
        }
        printf("%d\n", ans);
    }
    return 0;
}