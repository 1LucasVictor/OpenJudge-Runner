#include <stdio.h>

int prim();

#define empty -1
#define true 1
#define WHITE 0
#define BLACK 2
#define MAX 2000
#define INF 10000000
#define NIL -1

int aij[MAX][MAX],pi[MAX],d[MAX],color[MAX];
int N;

int main()
{
  int a,b,i,j,sum;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      scanf("%d",&aij[i][j]);
      if(aij[i][j]==-1){
        aij[i][j]=INF;
      }
    }
  }
  sum=prim();
  printf("%d\n",sum);
  return 0;
}

int prim(){
  int i,u,r=0,mincost,sum=0,v;
  for(u=0;u<N;u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  d[r] = 0;

  while(true){
    mincost = INF;
    u=-1;
    for(i=0;i<N;i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u=i;
      }
    }
    if(u == NIL){
      break;
    }
    color[u] = BLACK;
    for(v=0;v<N;v++){
      if(color[v] != BLACK && aij[u][v]!=INF && aij[u][v] < d[v]){
        pi[v] = u;
        d[v] = aij[u][v];
      }
    }
  }

  for(i=0;i<N;i++){
    if(pi[i]!=empty){
      sum += d[i];
    }
  }
  return sum;
}