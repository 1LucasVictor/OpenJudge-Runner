#include <stdio.h>
#include <math.h>

#define MAX 100
#define WHITE 0
#define BLACK 1
#define GRAY 2

int i, j, n, M[MAX][MAX];

void print()
{
    printf("%d\n", prim());
}

int prim()
{
    int u, v, mincost, weight = 0;
    int d[MAX], p[MAX], color[MAX];
    
    for (i = 0; i < n; i++) {
        d[i] = 100000;
        p[i] = -1;
        color[i] = WHITE;
    }
    
    d[0] = 0;
    
    while (1) {
        mincost = 100000;
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
            if (color[v] != BLACK && M[u][v] != 100000) {
                if (M[u][v] < d[v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        if (p[i] != -1) {
            weight = weight + M[i][p[i]];
        }
    }
    
    return weight;
}

int main()
{
    int e;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &e);
            M[i][j] = e;
            if (e == -1) {
                M[i][j] = 100000;
            }
        }
    }
    
    print();
    
    return 0;
}
