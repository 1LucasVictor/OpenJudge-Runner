#include <stdio.h>
#define inf 1000000
#define NIL -1
#define WHITE 0
#define BLACK 1
#define MAX 100

void prim();
int n,w[MAX][MAX];

int main(){
  int i,j;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
      if(w[i][j]==-1) w[i][j]=inf;
    }
  }

  prim();

  return 0;
}

void prim(){
  int d[MAX], pi[MAX], color[MAX];
  int u,mincost,i,v,sum=0,j;

  for(u=0;u<n;u++){
    d[u]=inf;
    pi[u]=NIL;
    color[u]=WHITE;
  }

  d[0]=0;

  while(1){
    mincost=inf;

    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
        mincost=d[i];
        u=i;
      }

    }

    if(mincost==inf) break;

    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && w[u][v]<d[v]){
        pi[v]=u;
        d[v]=w[u][v];
      }
    }
    
  }

  for(i=0;i<n;i++){
    if(pi[i]!=NIL) sum+=w[i][pi[i]];
  }

  printf("%d\n",sum);
}
