#include <stdio.h>
#include <string.h>

int n, dp[5][41];

int min(int a, int b){
    return a < b ? a : b;
}

int main(void){
    int x, y, z;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(x = 1; x <= 4; x++){
        for(y = 40; y >= 0; y--){
            for(z = 0; z <= min(y, 9); z++){
                dp[x][y] += dp[x-1][y-z];
            }
        }
    }
    while(scanf("%d", &n) != EOF){
        printf("%d\n", dp[4][n]);
    }
    return 0;
}