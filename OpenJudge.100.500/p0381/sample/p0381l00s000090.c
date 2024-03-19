#include <stdio.h>

int main(){
    int n, x;
    int i, j, k;
    
    while (1) {
        int ans = 0;
        
        scanf("%d %d", &n, &x);
        
        if (n == 0 && x == 0) {
            break;
        }
        
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                for (k = 1; k <= n; k++) {
                    if (((i + j + k) == x) && (i < j) && (j < k)) {
                        ans++;
                    }
                }
            }
        }
        
        printf("%d\n", ans);
    }
    
    return 0;
}

