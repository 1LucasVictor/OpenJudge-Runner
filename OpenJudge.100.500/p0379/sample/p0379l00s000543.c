#include <stdio.h>

#define N 100
#define M 100

int main(void) {

    int A[N][M];
    int b[M];
    int c[N] = {0};
    int i;
    int j;
    int n;
    int m;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            c[i] += A[i][j] * b[j];
        }
        printf("%d\n", c[i]);
    }

    return 0;
}