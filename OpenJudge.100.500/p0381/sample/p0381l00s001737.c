#include <stdio.h>
 
int main(void) {
    int n, x;
    int i, j, k, ans;
     
    while (scanf("%d %d", &n, &x), n || x) {
        ans = 0;
        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                for (k = j + 1; k <= n; k++) {
                    if (i + j + k == x) ans++;
                }
            }
        }
         
        printf("%d\n", ans);
    }
    return 0;
}
