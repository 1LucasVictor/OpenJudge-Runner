#include <stdio.h>
#define MAX 100
 
int main(void) {
    int i, j, sum, n, m, a[MAX][MAX], b[MAX];
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; scanf("%d", &a[i][j++]));
    }
    for(i = 0; i < m; scanf("%d", &b[i++]));
    for(i = 0; i < n; i++) {
        for(sum = j = 0; j < m; sum += a[i][j] * b[j++]);
        printf("%d\n", sum);
    }
    return 0;
}