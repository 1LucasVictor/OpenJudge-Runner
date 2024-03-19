#include <stdio.h>

int main() {
    int i, j, k, n, x, ans;
    
    ans = 0;
    
    while(1){
        scanf("%d %d", &n, &x);
        if(n==0&&x==0)
            break;
        for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                for(k=n; k>j; k--){
                    if(i + j + k == x)
                        ans++;
                }
            }
        }
    
    printf("%d\n", ans);
    }
    
    return 0;
}