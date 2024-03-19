#include <stdio.h>
#define INF 214748364

int prim();
int n,w[100][100];

int main(){
  int i,j,d;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
    }
  }
  d=prim();
  printf("%d\n",d);
  
  return 0;
}

int prim(){
  int dis=0,i,u,v,mincost,color[n],d[n],pi[n];

  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=-1;
    color[u]=-1;
  }

  d[0]=0;

  while(1){
    mincost=INF;

    for(i=0;i<n;i++){
      if(color[i]!=1&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }

    if(mincost==INF) break;

    color[u]=1;

    for(v=0;v<n;v++){
      if(color[v]!=1&&w[u][v]<d[v]&&w[u][v]!=-1){
	pi[v]=u;
	d[v]=w[u][v];
      }
    }
  }
  for(i=0;i<n;i++){
    dis+=w[i][pi[i]];
  }
  return dis;
}