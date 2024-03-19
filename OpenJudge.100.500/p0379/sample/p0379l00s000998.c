#include <stdio.h>
#include <stdlib.h>
int main(){

    int n, m;
    int a[100][100];
    int b[100][1];
    int c[100][1];
    int i, j;

    scanf("%d %d",&n, &m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j = 0; j < m; j++){
        scanf("%d", &b[j][0]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            c[i][0] += a[i][j] * b[j][0];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d\n",c[i][0]);
    }

    return 0;
}
