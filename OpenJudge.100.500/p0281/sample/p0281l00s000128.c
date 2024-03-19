#include<stdio.h>
#define N 100
#define INF 2000000
#define WHITE 1
#define BLACK 2

int n,array[N][N];
void dijkstra(void);

int main(){
    int i,j,u,k,v,c;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            array[i][j] = INF;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            array[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}
void dijkstra(){
    int mincost,i,j,u,v;
    int d[N],color[N],p[N];

    for(i=0;i<n;i++){
        d[i] = INF;
        color[i] = WHITE;
        p[i] = -1;
    }

    d[0] = 0;
    while(1){
        mincost = INF;
        for(i=0;i<n;i++){
            if(color[i] != BLACK && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF) break;
        color[u] = BLACK;
        
        for(v=0;v<n;v++){
            if(color[v] != BLACK && d[u]+array[u][v] < d[v]){
                p[v] = u;
                d[v] = d[u] + array[u][v];
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }
}
