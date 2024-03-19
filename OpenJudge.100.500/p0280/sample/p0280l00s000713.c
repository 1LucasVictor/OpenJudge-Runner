#include<stdio.h>
#define N 100
#define INFTY 20000
#define WHITE 0
#define GRAY 1
#define BLACK 2
int M[N][N];
int n;
int prim(){
  int color[N],d[N],p[N];
  int v,i,mincost,sum,u;

  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    u=-1;
    mincost=INFTY;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost = d[i];
	u=i;
      }
    }
    if(u == -1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=INFTY){
	if(M[u][v]<d[v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=GRAY;
	}
      }
    }
    sum=0;
    for(i=0;i<n;i++){
      if(p[i]!=-1){
	sum+=M[i][p[i]];
      }
    }
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf ("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INFTY:e;
    }
  }
  printf("%d\n",prim());
}
  