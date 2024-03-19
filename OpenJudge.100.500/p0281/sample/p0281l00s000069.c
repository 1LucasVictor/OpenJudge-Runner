#include <stdio.h>
#define MAX 100
#define INF 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2

void dij();

int n,BY[MAX][MAX];

int main(){
    int u,k,v,c;
    int i,j;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            BY[i][j]=INF;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            BY[u][v]=c;
        }
    }
    dij();

    return 0;
}

void dij(){
     int minicost,i,u,v;
    int wei_min[MAX],color[MAX];

    for(i=0;i<n;i++){
        wei_min[i]=INF;
        color[i]=WHITE;
}
wei_min[0]=0;
color[0]=GRAY;

while(1){
    minicost=INF;
    u=-1;
    for(i=0;i<n;i++){
         if(color[i]!=BLACK && wei_min[i]<minicost){
            minicost=wei_min[i];
            u=i;
    }
    }
    if(u==-1) break;
    color[u]=BLACK;

    for(v=0;v<n;v++){
        if(color[v]!=BLACK && BY[u][v]!=INF){
            if(wei_min[u]+BY[u][v]<wei_min[v]){
                wei_min[v]=wei_min[u]+BY[u][v];
                color[v]=GRAY;
            }
        }
    }
}
for(i=0;i<n;i++){
    printf("%d %d\n",i,(wei_min[i]==INF?-1:wei_min[i]));
}
}

