#include <stdio.h>

#define N 100
#define INF 10000
#define NIL -1
#define WHITE 1
#define BLACK 0
#define GRAY 2

void prim(void);

int n,d[N],color[N],G[N][N];

int main(){
    int i,j,u,k,v,c;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            G[i][j]=INF;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            G[u][v]=c;
        }
    }

    prim();

    for(i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }

    return 0;
    
}

void prim(){
    int u,v,mincost,i;

    for(u=0;u<n;u++){
        d[u]=INF;
        color[u]=WHITE;
    }

    d[0]=0;
    color[0]=GRAY;

    while(1){
        mincost=INF;

        for(i=0;i<n;i++){
            if(color[i]!=BLACK && d[i]<mincost){
                mincost=d[i];
                u=i;
            }
        }

        if(mincost==INF) break;

        color[u]=BLACK;

        for(v=0;v<n;v++){
            if(G[u][v]!=NIL){
                if(color[v] != BLACK && d[u]+G[u][v] < d[v]){
                d[v]=d[u]+G[u][v];
                color[v]=GRAY;
                }
            }
        }
    }
}