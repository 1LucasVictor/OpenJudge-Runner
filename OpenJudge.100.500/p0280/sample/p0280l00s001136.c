#include <stdio.h>
#define NIL -1
#define WHITE 1
#define BLACK 0
#define INF 100000

void prim(void);

int a[100][100];
int sum=0;
int n;

int main(){

  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j]==NIL) a[i][j]=INF;
    }
  }

  prim();

  printf("%d\n",sum);

  return 0;
}

void prim(){

  int d[100];
  int pi[100];
  int color[100];
  int i,j,u,v,mincost;
  
  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[0]=0;

  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF) break;

    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && a[u][v]<d[v] ){
	pi[v]=u;
	d[v]=a[u][v];
      }
    }   
  }
  for(i=0;i<n;i++){
    sum+=d[i];
  }
  
}