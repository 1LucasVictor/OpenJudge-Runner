#include <stdio.h>
#define INF 1000000000
#define BLACK 1
#define WHITE 0
#define NIL -1

int G[101][101],d[101],pi[101],n,color[101],sum=0;

void prim(int);
int main(){
  int i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  prim(1);

  printf("%d\n",sum);

  return 0;
  
}

void prim(int r){
  int mincost,u,i,v;

  for(u=1;u<=n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[r]=0;
  while(1){
    mincost=INF;
    for(i=1;i<=n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF) break;
    color[u]=BLACK;
    for(v=1;v<=n;v++){
      if(color[v]!=BLACK && G[u][v]<d[v] && G[u][v]!=-1){
	pi[v]=u;
	d[v]=G[u][v];
      }
    }

  }

  for(i=1;i<=n;i++){
    if(pi[i]!=NIL) sum=sum+G[i][pi[i]];
      
  

  }
}