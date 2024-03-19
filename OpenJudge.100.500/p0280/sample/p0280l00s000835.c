#include<stdio.h>
#define N 101
#define BLACK 0
#define WHITE 1
#define INF 20000
#define NIL -1

int w[N][N],d[N],pi[N],color[N],n;
void prim(void);

int main(){

  int i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&w[i][j]);
      if(w[i][j]==-1)
	w[i][j]=INF;
    }
  }

  prim();

  return 0;
}


void prim(void){
  int i,j,mincost,v,r,u,sum=0;

  for(u=1;u<=n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[1]=0;

  while(1){
    mincost=INF;
    for(i=1;i<=n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }

    if(mincost==INF)
      break;

    color[u]=BLACK;

    for(v=1;v<=n;v++){
      if(color[v]!=BLACK && w[u][v]<d[v]){
	pi[v]=u;
	d[v]=w[u][v];
      }
    }
  }
    for(v=1;v<=n;v++){
      sum+=d[v];
    }
  printf("%d\n",sum);
}