#include<stdio.h>

#define MAX 100
#define INF (1<<2l)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;
int M[MAX][MAX];//M[u][v]にuからvへの辺の重みを記録した隣接行列

int prim();

int main(){

  int i,j,e;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INF:e;
    }
  }
  
  printf("%d\n",prim());

  return 0;
}

int prim(){

  int u,i,v,minv,sum=0;
  int d[MAX];//重みが最少の辺の重みを記録
  int p[MAX];//MSTにおける頂点vの親を記録
  int color[MAX];//color[v]にWHITE,GRAY,BLACKを記録

  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[0]=0;
 
  while(1){
    minv=INF;
    u=-1;
    
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
	u=i;
	minv=d[i];
      }
    }
    
    if(u==-1)break;
    color[u]=BLACK;
    
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&M[u][v]!=INF){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
 
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=M[i][p[i]];
  }

  return sum;
}