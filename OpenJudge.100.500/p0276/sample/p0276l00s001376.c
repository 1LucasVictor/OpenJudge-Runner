#include <stdio.h>
#define MAX 101

int main(){
    int n, u, v, k, vmax = 0;
    int G[MAX][MAX];

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            G[i][j] = 0;
        }
    }

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &u, &k);
        for(int j = 0; j < k; j++){
            scanf("%d", &v);
            if(vmax < v)vmax = v;
            G[u][v - 1] = 1;
        }
    }

    for(int i = 0; i < n;i++){
        for(int j = 0; j < vmax; j++){
            printf("%d", G[i + 1][j]);
            if(j < vmax - 1)printf(" ");
        }
        printf("\n");
    }

    return 0;
}

