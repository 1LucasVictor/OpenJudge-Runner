#include <stdio.h>
#define N 100
#define INF 10000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int color[N];
int M[N][N];
int d[N];
int p[N];
int n;

void prim(void);

int main()
{
    int i,j,sum = 0;
    
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    prim();
    
    for(i = 0;i < n;i++){
        if(p[i] != -1){
            sum += M[i][p[i]];
        }
    }
    printf("%d\n",sum);
    return 0;
}

void prim(void)
{
    int i,u = 0,v = 0;
    int mincost;
    for(u = 0;u < n;u++){
        color[u] = WHITE;
        d[u] = INF;
        p[u] = -1;
    }
    d[0] = 0;
    
    while(1){
        mincost = INF;
        u = -1;
        for(i = 0;i < n;i++){
            if(color[i] != BLACK && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }
        
        if(u == -1) break;
        
        color[u] = BLACK;
        
        for(v = 0;v < n;v++){
            if(color[v] != BLACK && M[u][v] != -1){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
}

