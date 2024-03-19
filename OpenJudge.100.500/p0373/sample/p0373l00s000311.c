#include <stdio.h>

int main() {
    int i, k, m, n = 0;
    int h[100], w[100];
    while(1) {
        scanf("%d %d", &h[n], &w[n]);
        if(h[n] == 0 && w[n] == 0) break;
        n++;
    }
    for(i = 0; i < n; i++) {
        for(k = 0; k < h[i]; k++) {
            for(m = 0; m < w[i]; m++) {
                if(k == 0 || k == h[i] - 1) printf("#");
                else if(m == 0 || m == w[i] - 1) printf("#");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}