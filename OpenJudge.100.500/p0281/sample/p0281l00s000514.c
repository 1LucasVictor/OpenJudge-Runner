#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100
#define INF 100000
#define WHITE 0
#define BLACK 1
#define NIL -1


int color[MAX], d[MAX], M[MAX][MAX];

int main() {
    int n,i,j,k,u,v,c,min;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=NIL;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        
        for(j =0;j<k;j++){
            scanf("%d%d",&v,&c);
            M[i][v]=c;
        }
    }
    for(i=0;i<n;i++){
        d[i]=INF;
        color[i]=WHITE;
    }
    d[0]=0;
    
    while(1){
        min=INF;
        
        for(i=0;i<n;i++){
            if(min>d[i] && color[i]==WHITE){
                u=i;
                min=d[i];
            }
        }
        
        if(min==INF) break;
        color[u]=BLACK;
        
        for(v=0;v<n;v++){
            if(M[u][v]==NIL) continue;
            if(d[v]>M[u][v]+d[u]) d[v] = M[u][v]+d[u];
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }
    
    return 0;
}