#include <stdio.h>

int main()
{
    int A[100][100];
    int B[100][100];
    int n, m, l;
    long long c;
    int i, j, k;
    scanf("%d %d %d", &n, &m, &l);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < l; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < l; j++) {
            c = 0;
            for(k = 0; k < m; k++) {
                c += A[i][k] * B[k][j];
            }
            if(j == (l-1)) {
                printf("%lld\n", c);
            } else {
                printf("%lld ", c);
            }
        }
    }
    return 0;
}
