#include <stdio.h>
int main(void){
    int i, j;
    int n, m;
    int a[100][100], b[100];
    int c[100];

    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < m; j++){
        scanf("%d", &b[j]);
    }

    for(i = 0; i < n; i++){
        c[i] = 0;
        for(j = 0; j < m; j++){
            c[i] += a[i][j] * b[j]; 
        }
        printf("%d", c[i]);
        putchar('\n');
    }
    return 0;
}
