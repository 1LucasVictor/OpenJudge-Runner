#include <stdio.h>

#define MIN(x, y) ((x)>(y)?(y):(x))

int main() {
    int i, j, k, n, arr[100][100], tmp, tmps;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) arr[i][j] = 101;
        arr[i][i] = 0;
    }
    for(i = 0; i < n; i++) {
        scanf("%*d%d", &tmp);
        for (j = 0; j < tmp; j++) {
            scanf("%d", &tmps);
            arr[i][tmps - 1] = 1;
            arr[tmps - 1][i] = 1;
        }
    }
    for(k = 0; k < n; k++)for(i = 0; i < n; i++)for(j = 0; j < n; j++) {
        arr[i][j] = MIN(arr[i][j], arr[i][k] + arr[k][j]);
    }
    for(i = 0; i < n; i++) {
        printf("%d ", i + 1);
        if (arr[0][i] > 100) printf("-1");
        else printf("%d", arr[0][i]);
        printf("\n");
    }
    return 0;
}
