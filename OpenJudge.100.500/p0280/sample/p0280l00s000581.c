#include<stdio.h>
#define N 100
#define WHITE 0
#define BLACK 2
#define GRAY 1
#define INFTY -100

int prim(void);

int n,G[N][N];

int main(){
  int i,j;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  printf("%d\n",prim());
  return 0;
}

int prim(){
  int i,u,v,d[N],p[N],color[N],min,sum=0;
  for(i = 0;i < n;i++){
    p[i]=WHITE;
    d[i]=INFTY;
  }
  p[0]=-1;
  d[0]=0;

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
      if(color[v] != BLACK && G[u][v] != INFTY){
        if(G[u][v] < d[v]){
          d[v] = G[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
  for(i = 0;i < n;i++){
    if(p[i] != -1){
      sum += G[i][p[i]];
    }
  }
  return sum;
}