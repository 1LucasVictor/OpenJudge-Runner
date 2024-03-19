#include <stdio.h>

int main (void) {
    int n, x, y, z;
    int res;

    for (;;) {
        res = 0;
        scanf ("%d %d", &n, &x);
        if (n==0 && x==0) break;
        for (int i=1; i<=n; i++) {
            y=x-i;
            if (y<=2*i) break;
            for (int j=i+1; j<=n; j++) {
                z=y-j;
                if (z<=j) break;
                if (z>j && z<=n) res++;
            }
        }
        printf ("%d\n", res);
    }
    
    return 0;
}
