#include <stdio.h>

int main() {
    int i, j, k, n, x, ans;
    
    ans = 0;
    
    scanf("%d %d", &n, &x);

    
    
        for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                for(k=j+1; k<=n; k++){
                    if(i + j + k == x)
                        ans++;
                }
            }
        }
    
    printf("%d\n", ans);
    
    return 0;
}