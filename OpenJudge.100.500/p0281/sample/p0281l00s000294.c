#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
    int n, i, j, e, sum = 0;
    int M[MAX][MAX];
    int d[MAX];         // 最小コスト
    int p[MAX];
    int x[MAX];         // visited-boolean
    int min = INFTY, k, u, v, c;

    scanf("%d", &n);
    for ( i = 0; i< n; i++ ){
        for ( j = 0; j < n; j++ ){
            M[i][j] = INFTY;
        }
    }

    for ( i = 0; i < n; i++ ){
        scanf("%d %d", &u, &k);
        for ( j = 0; j < k; j++ ){
            scanf("%d %d", &v, &c);
            M[u][v] = c;
        }
    }

    // 初期化
    for (i = 0; i < n; i++) {
        d[i] = INFTY;
        p[i] = -1;
        x[i] = 0;
    }
    d[0] = 0;   // aからaの距離は0

    while(1) {
        u = -1;
        min = INFTY;

        // d[u]が最小になるuを求める
        for(i = 0; i < n; i++){
            if(d[i] < min && x[i] == 0) {       // 最小コスト && 未訪
                u = i;      // 最小コストx[i]保存
                min = d[i];     //最小コスト保存
            }
        }

        if(u == -1) break;      //all訪問
        x[u] = 1;       // 訪問済

        for(i = 0; i < n; i++){
            if(M[u][i]+d[u] < d[i] && x[i] == 0){
                d[i] = M[u][i] + d[u];
                p[i] = u;   // 最短経路v保持
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d %d\n", i, (d[i] == INFTY?-1:d[i]));
    }
    return 0;
}