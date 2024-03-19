#include <stdio.h>
#define MAX 100
#define INF 1000000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,G[MAX][MAX];

int prim(void){
  int i,u,v,min,sum;
  int d[MAX],p[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    min = INF;
    u = -1;
    for(i=0;i<n;i++){
      if((min>d[i])&&(color[i]!=BLACK)){
        u = i;
        min = d[i];
      }
    }
    
    if(u==-1){
      break;
    }
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if((color[v]!=BLACK)&&(G[u][v]!=INF)){
        if(d[v]>G[u][v]){
            d[v] = G[u][v];
            p[v] = u;
            color[v] = GRAY;
        }
      }
    }
  }

  sum = 0;
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum = sum+G[i][p[i]];
    }
  }

  return sum;
}

int main(){
  int i,j,cost;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&cost);
      if(cost==-1){
        G[i][j] = INF;
      }else{
        G[i][j] = cost;
      }
    }
  }

  printf("%d\n",prim());
  
  return 0;
}

