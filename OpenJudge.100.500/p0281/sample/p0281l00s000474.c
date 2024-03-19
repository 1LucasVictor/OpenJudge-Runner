#include<stdio.h>
#define N 100
#define WHITE 0
#define BLACK 2
#define GRAY 1
#define INFTY 100000000

void dijkstra(void);

int n,G[N][N];

int main(){
  int i,j,u,v,k,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=INFTY;
    }
  }
  for(i = 0;i < n;i++){
    scanf("%d%d",&u,&k);
    for(j = 0;j < k;j++){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,u,v,d[N],p[N],color[N],min;
  for(i = 0;i < n;i++){
    p[i]=-1;
    color[i]=WHITE;
    d[i]=INFTY;
  }

  d[0]=0;
  color[0]=GRAY;
  while(1){
    min = INFTY;

    for(i = 0;i < n;i++){
      if(color[i] != BLACK && d[i] < min){
        min = d[i];
        u = i;
      }
    }
    if(min == INFTY)break;
    color[u]= BLACK;

    for(v = 0;v < n;v++){
      if(color[v] != BLACK && G[u][v] != INFTY && G[u][v]+d[u] < d[v]){
        d[v] = G[u][v] + d[u];
        p[v] = u;
        //printf("%d \n",d[v]);
        color[v] = GRAY;
      }
    }
  }
  for(v = 0;v < n;v++){
    printf("%d %d\n",v,d[v]);
  }
}