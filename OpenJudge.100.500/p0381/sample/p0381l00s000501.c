#include <stdio.h>

int main(int argc, const char * argv[]){
    int n, x, max, a, b, c, ans;
    
    while (1) {
        scanf("%d%d", &n, &x);
        if (n == 0 && x == 0) break;
        
        ans = 0;
        max = x; if (max > n) max = n;
        for (a = 1; a <= max; a++) {
            for (b = a + 1; b <= max; b++) {
                c = x - a - b;
                if (c > b && c <= n) ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}