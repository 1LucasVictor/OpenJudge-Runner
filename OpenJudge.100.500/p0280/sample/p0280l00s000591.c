#include <stdio.h>
#define INF 20000000
#define NIL -1
#define WHITE 0
#define BLACK 1

int main(){
  int i,j,mincost,u,v,sum=0;
  int n,a[101][101],d[101],pi[101],color[101];

  //input
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  //processing
  for(i=1;i<=n;i++){
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  d[1] = 0;
  while(1){
    mincost=INF;
    for(i=1;i<=n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF)break;
    color[u]=BLACK;
    for(v=1;v<=n;v++){
      if(color[v]!=BLACK&&a[u][v]<d[v]&&a[u][v]!=-1){
	pi[v]=u;
	d[v]=a[u][v];
      }
    }
  }
  for(i=1;i<=n;i++){
    sum+=d[i];
  }
  //output
  printf("%d\n",sum);
  return 0;
}