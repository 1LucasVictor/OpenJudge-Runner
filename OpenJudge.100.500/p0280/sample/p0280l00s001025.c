#include <stdio.h>

#define N 100
#define INF 10000
#define NIL -1
#define WHITE 1
#define BLACK 0

int prim();

int n,d[N],pi[N],color[N],G[N][N];

int main(){
    int i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&G[i][j]);
        }
    }

    printf("%d\n",prim());

    return 0;
    
}

int prim(){
    int u,v,mincost,i,weight=0;

    for(u=0;u<n;u++){
        d[u]=INF;
        pi[u]=NIL;
        color[u] = WHITE;
    }

    d[0]=0;

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
                if(color[v] != BLACK && G[u][v] < d[v]){
                pi[v]=u;
                d[v]=G[u][v];
                }
            }
        }
    }


    for(i=0;i<n;i++) weight+=d[i];

    return weight;

}