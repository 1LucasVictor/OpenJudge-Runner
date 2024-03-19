#include <stdio.h>
#define MAX 100
#define INF (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,G[MAX][MAX];

void dijkstra(void){
    int i,v,u,min;
    int d[MAX],color[MAX];
    
    for(i=0;i<n;i++){
        d[i]=INF;
        color[i]=WHITE;
    }
    d[0]=0;
    color[0]=GRAY;
    while(1){
        min=INF;
        u=-1;
        for(i=0;i<n;i++){
            if(min>d[i]&&color[i]!=BLACK){
                u=i;
                min=d[i];
            }
        }
        if(u==-1)break;
        color[u]=BLACK;
        for(v=0;v<n;v++){
            if(color[v]!=BLACK&&G[u][v]!=INF){
                if(d[v]>d[u]+G[u][v]){
                    d[v]=d[u]+G[u][v];
                    color[v]=GRAY;
                }
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ",i);
        if(d[i]==INF){
            printf("-1\n");
        }else{
            printf("%d\n",d[i]);
        }
    }
}

int main(){
    int i,j,k,u,v,c;
    
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
    
    dijkstra();
    
    return 0;
}



