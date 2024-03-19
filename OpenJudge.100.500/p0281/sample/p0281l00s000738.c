#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100
#define WHITE 0
#define BLACK 1
#define GRAY 2
#define INFNTY 1000000

int i, j, n, M[MAX][MAX];

void dijkstra()
{
    int u, v, mincost;
    int d[MAX], color[MAX];
    
    for (i = 0; i < n; i++) {
        d[i] = INFNTY;
        color[i] = WHITE;
    }
    
    d[0] = 0;
    color[0] = GRAY;
    
    while (1) {
        mincost = INFNTY;
        u = -1;
        for (i = 0; i < n; i++) {
            if (color[i] != BLACK && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
        if (u == -1) {
            break;
        }
        
        color[u] = BLACK;
        
        for(v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFNTY) {
                if (d[u] + M[u][v] < d[v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", i);
        if (d[i] == INFNTY) {
            d[i] = -1;
            printf("\n", d[i]);
        }
        else {
            printf("%d\n", d[i]);
        }
    }
}

int main()
{
    int u, k, v, c;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            M[i][j] = INFNTY;
        }
    }
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d %d", &v, &c);
            M[u][v] = c;
        }
    }
    
    dijkstra();
    
    return 0;
}
