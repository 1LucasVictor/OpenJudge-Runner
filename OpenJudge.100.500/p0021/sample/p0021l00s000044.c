#include <stdio.h>

int main() {
    int i, j, n, tmax, max, num[5000];
    while (scanf("%d", &n), n > 0) {
        max = 0;
        
        for (i=0; i<n; i++) {
            scanf("%d", &num[i]);
            max += num[i];
        }
        
        for (; n>0; n--) {
            for (i=0; i<n; i++) {
                tmax = 0;
                for (j=i; j<n; j++) {
                    tmax += num[j];
                }
                if (tmax > max) max = tmax;
            }
        }
        
        printf("%d\n", max);
    }
    return 0;
}