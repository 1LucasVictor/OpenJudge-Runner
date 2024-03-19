#include<stdio.h>

#define MAX 100
#define INFTY 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

void sssp(void );

int  n, G[MAX][MAX];

void sssp(){
    int minv,i,v,u;
    int d[MAX],color[MAX];

    for(i = 0; i < n; i++) {
        d[i] = INFTY;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    while(1) {
        minv = INFTY;
        u = -1;
        for(i = 0; i < n; i++) {
            if(minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if(u == -1) {
          break;
        }
        color[u] = BLACK;
        for(v = 0; v < n; v++) {
            if(color[v] != BLACK && G[u][v] != INFTY) {
                if(d[v] > d[u] + G[u][v]) {
                    d[v] = d[u] + G[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    for(i = 0; i< n; i++){
        printf("%d ",i);
        if(d[i] == INFTY) printf("-1\n");
        else printf("%d\n", d[i]);
    }
}

int main() {
    int i,j,k,c,u,v;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            G[i][j] = INFTY;

    for(i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for(j = 0; j < k; j++) {
            scanf("%d %d", &v, &c);
            G[u][v] = c;
        }
    }

    sssp();

    return 0;
}

