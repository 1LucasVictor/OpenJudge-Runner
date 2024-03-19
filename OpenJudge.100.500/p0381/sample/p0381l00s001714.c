#include <stdio.h>

int main(){
    int n, x;
    int i, j, k;
    int ans = 0;
    
    scanf("%d %d", &n, &x);
    
    for (i = 1; i <= n - 2; i++) {
        for (j = 2; j <= n - 1; j++) {
            if (i == j) {
                break;
            }
            
            for (k = 3; k <= n; k++) {
                if ((i == j) || (i == k)) {
                    break;
                }
                
                if (i + j + k == x) {
                    ans++;
                }
            }
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}

