#include<stdio.h>

#define WHITE 0
#define BLACK 2
#define INF 100000000
#define NIL NULL

int n,add=0,w[150][150],d[11000];

void prim();

int main(){
  int i,j,r;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&w[i][j]);
    }
  }
  r=0;
  prim();
  for(i=1;i<=n;i++){
    add+=d[i];
  }
  printf("%d\n",add);

  return 0;
}

void prim(){
  int i,u,v,mincost,pi[n],color[n];

  for(u=1;u<=n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[1]=0;
  while(1){
   
    mincost=INF;
    for(i=1;i<=n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF){
      break;
    }
    color[u]=BLACK;
    for(v=1;v<=n;v++){
      if(color[v] != BLACK && w[u][v]<d[v] &&w[u][v]>=0){
	pi[v]=u;
	d[v]=w[u][v];
      }
    }
  }
}

