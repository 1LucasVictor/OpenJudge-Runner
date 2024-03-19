#include <stdio.h>
#define INF 1000000
#define SIZE 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int G[SIZE][SIZE];
int dis[SIZE];
int n;

int min(int a, int b){

  return (a>b ? b : a);
}

void dijkstra(int u){
  int mincost,i,j;
  int color[SIZE];

  for(i=0; i<n; i++){
    dis[i] = INF;
    color[i] = WHITE;
  }

  dis[u] = 0;
  color[u] = GRAY;

  while(1){
    int ver = -1;
    mincost = INF;

    for(i=0; i<n; i++){
      if(color[i] == GRAY && dis[i] < mincost){
        mincost = dis[i];
        ver = i;
      }
    }

    if(ver == -1) break;

    color[ver] = BLACK;

    for(i=0; i<n; i++){

      if(color[i] != BLACK && G[ver][i] < INF){
        color[i] = GRAY;
        dis[i] = min(dis[i],dis[ver]+G[ver][i]);
      }
      
    }

    
  }
  
}

int main(){
  int i,j;
  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      G[i][j] = INF;
    }
  }

  for(i=0; i<n; i++){
    int u,k;
    scanf("%d %d",&u,&k);

    for(j=0; j<k; j++){
      int v,c;
      scanf("%d %d",&v,&c);
      G[u][v] = c;
    }
  }

  dijkstra(0);

  for(i=0; i<n; i++){
    printf("%d %d\n",i,dis[i]);
  }

  

  return 0;
  
}

