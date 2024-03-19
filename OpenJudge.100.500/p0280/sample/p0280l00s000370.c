#include <stdio.h>

#define INF 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 101

int main(){
    int i,j,n;
    int mincost,u,v,sum=0;
    
    scanf("%d",&n);
    
    int color[n];
    int d[n];
    int M[n][n];
    int p[n];
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=-1;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        color[i]=WHITE;
        d[i]=INF;
    }
    d[0]=0;
    p[0]=-1;
    
    while(1){
        mincost=INF;
        for(i=0;i<n;i++){
            if(color[i]!=BLACK && d[i]<mincost){
                mincost=d[i];
                u=i;
            }
        }
        if(mincost==INF)break;
        
        sum+=mincost;
        color[u]=BLACK;
        
        for(v=0;v<n;v++){
            if(color[v]!=BLACK && M[u][v]!=-1){
                if(M[u][v]<d[v]){
                    d[v]=M[u][v];
                    p[v]=u;
                    color[v]=GRAY;
                }
            }
        }
    }
    printf("%d\n",sum);
    
    return 0;
    
}