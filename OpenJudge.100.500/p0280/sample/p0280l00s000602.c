#include<stdio.h>
#define N 100
#define WHITE 1
#define BLACK 2
#define INF 2000000

int n,array[N][N];
int prim(void);

int main(){
    int i,j,tmp;
    
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&tmp);
            if(tmp != -1){
                array[i][j] = tmp;
            }
            else{
                array[i][j] = INF;
            }
        }
    }

    printf("%d\n",prim());

    return 0;
}
int prim(){
    int u,mincost,v,sum=0,i,j;
    int color[N],p[N],d[N];

    for(i=0;i<n;i++){
        color[i] = WHITE;
        d[i] = INF;
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
            if(color[v] != BLACK && array[u][v] < d[v]){
                p[v] = u;
                d[v] = array[u][v];
            }
        }
    }

    for(i=0;i<n;i++){
        sum += d[i];
    }

    return sum;
}
