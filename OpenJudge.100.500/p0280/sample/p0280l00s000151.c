#include<stdio.h>
#define N 100
#define INF 2000000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

int A[N][N],n;

int prim(void){
  int u,i,v,mincost,total;
  int d[N],pi[N],color[N];

  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=NIL;
    color[i]=WHITE;
  }
  d[0]=0;

  while(1){
    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(mincost>d[i]&&color[i]!=BLACK){
	u=i;
	mincost=d[i];
      }
    }
    if(u==NIL) break;

    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && A[u][v]!=NIL){
	if(d[v]>A[u][v]){
	  d[v]=A[u][v];
	  pi[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
  total=0;
  for(i=0;i<n;i++){
    if(pi[i]!=NIL) total+=A[i][pi[i]];

  
  }
  return total;
}
int main(){
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) scanf(" %d",&A[i][j]);
  }

  
  printf("%d\n",prim());

  return 0;
}

