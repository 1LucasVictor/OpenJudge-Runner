#include<stdio.h>
#include<math.h>

int main() {
    int N, M, s[5], c[5];
    int a[5];
    int i, j, k, x, digit, num, ans = -1;
    scanf("%d %d", &N, &M);
    for (i=0; i<M; i++) 
        scanf("%d %d", &s[i], &c[i]);

    int start = (int)(pow(10, N-1));
    int limit = (int)(pow(10, N));
    // printf("%d to %d", start, limit);

    for (i=start; i<limit; i++) {
        x = i;
        for (k=N; k>0; k--) {
            a[k] = (x % 10);
            x /= 10;
        }

        for (j=0; j<M; j++) {
            if (a[s[j]] != c[j]) break;
        }
        if (j==M) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
/*
    int x = 702;
    for (k=N; k>0; k--) {
        a[k] = (x % 10);
        x /= 10;
    }

    for (k=N; k>0; k--) 
        printf("%d ", a[k]);
*/
    return 0;
}