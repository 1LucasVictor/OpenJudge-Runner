#include <stdio.h>
#define MAX 100
#define inf 1000000000
#define NIL -1
#define WHITE 0
#define BLACK 1
#define GRAY 2

int n,A[MAX][MAX];

int prim(){
  int i,u,mincost;
  int d[MAX],p[MAX],color[MAX];
  
  for(i=0;i<n;i++){
    d[i]=inf;
    p[i]=NIL;
    color[i]=WHITE;
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

    for(i=0;i<n;i++){
      if(color[i]!=BLACK && A[u][i] != inf){
	if(d[i]>A[u][i]){
	  d[i]=A[u][i];
	  p[i]=u;
	  color[i]=GRAY;
	}
      }
    }
  }
  int sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum+=A[i][p[i]];
  }
  return sum;
}

  
  

int main(){
  int i,j,e; //nは頂点、Aは辺の重み
 

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e==-1) A[i][j]=inf;
      else A[i][j]=e;
      
    }
  }

  
  printf("%d\n",prim());

  return 0;
}


  

