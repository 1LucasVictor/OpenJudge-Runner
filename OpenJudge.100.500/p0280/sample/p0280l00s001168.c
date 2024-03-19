#include <stdio.h>
#define MAX 100
#define INF 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1

int prim(void);
int M[MAX][MAX],n,d[MAX],p[MAX],color[MAX];

int main(){
    int i,j;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    printf("%d\n",prim());
    return 0;
}

int prim(void){
    int mincost,i,j,u,v,sum=0;
    
    for(i=0;i<n;i++){
        d[i]=INF;
        //p[i]=NIL;
        color[i]=WHITE;
    }
    
    d[0]=0;
    p[0]=NIL;

    while(1){
        mincost=INF;
        for(i=0;i<n;i++){
            if(color[i]!=BLACK && d[i]<mincost){
                mincost=d[i];
                u=i;
            }
        }
        if(mincost==INF) break;
        sum+=mincost;
        color[u] = BLACK;
        
        for(v=0;v<n;v++){
            if(color[v]!=BLACK && M[u][v]!=NIL){
                if(M[u][v]<d[v]){
                    d[v]=M[u][v];
                    p[v]=u;
                    color[v]=GRAY;
                }
            }
        }
    }
    
    return sum;
}