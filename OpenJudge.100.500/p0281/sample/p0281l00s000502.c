#include<stdio.h>
#define N 105
#define INF 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[N][N]={};

void dijkstra(void){
    int min,i,v;
    int d[N],color[N];
    for(i=0;i<n;i++){
        d[i]=INF;
        color[i]=WHITE;
    }
    d[0]=0;
    color[0]=GRAY;
    while(1){
        min=INF;
        int u=-1;
        for(i=0;i<n;i++){
            if(min>d[i] && color[i]!=BLACK){
                u=i;
                min=d[i];
            }
        }
        if(u==-1)break;
        color[u]=BLACK;
        for(v=0;v<n;v++){
            if(color[v]!=BLACK && M[u][v]!=INF){
                if(d[v] > d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                    color[v]=GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",i);
        if(d[i]==INF)printf("%d\n",-1);
        else printf("%d\n",d[i]);
    }
}

int main(){
    int i,j,u,k,c,v;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=INF;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            M[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}

