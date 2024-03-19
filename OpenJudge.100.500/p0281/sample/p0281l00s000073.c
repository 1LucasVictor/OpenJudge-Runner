#include<stdio.h>
#define NIL NULL
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 1000000
int n,M[1000][1000];

void dijkstra(){
    int d[100],color[100];
    int i,v,minv,u;
    for(i=0;i<n;i++){
        d[i]=INF;
        color[i]=WHITE;
    }
    d[0]=0;
    color[0]=GRAY;
    while(1){
        minv=INF;
        u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1){
        break;
        }
        color[u]=BLACK;
        for(v=0;v<n;v++){
            if(color[v]!=BLACK&&M[u][v]!=INF){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=M[u][v]+d[u];
                    color[v]=GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }
}

int main(){
    int i,j,u,k,v,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                M[i][j]=INF;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d %d",&v,&c);
            M[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}
