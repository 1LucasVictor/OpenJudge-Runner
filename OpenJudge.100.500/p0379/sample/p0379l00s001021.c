#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n, m, a, s=0,g[100][100] = { 0 }, v[100] = { 0 };
    scanf("%d%d", &n,&m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a);
            g[i][j] = a;
        }
    }
    for (int i = 0; i < m;i++) {
        scanf("%d", &a);
        v[i] = a;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             s+=g[i][j] * v[j];
        }
        printf("%d\n", s);
        s = 0;
    }
    return 0;
}
