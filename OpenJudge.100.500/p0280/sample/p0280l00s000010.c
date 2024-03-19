#include<stdio.h>
#define N 100
#define WHITE 0
#define BLACK 2
#define INF 10000001
#define NIL -1

int A[N][N],color[N],t,min,d[N],pi[N];

void prim(int G,int r){
  int i,j,u=0;
  
  for(i=0;i<G;i++){
    d[i]=INF;
    pi[i]=NIL;
  }
  d[r]=0;
  while(1){
    min = INF;
    for(i=0;i<G;i++){
      if(color[i]!=BLACK && d[i]<min){
	min =d[i];
	u=i;
      }
    }
    
    if(min == INF) break;
    
    color[u]=BLACK;
    
    for(i=0;i<G;i++){
      if(color[i] != BLACK && A[u][i]<d[i] && A[u][i]!=-1){
	pi[i]=u;
	d[i] = A[u][i]; 
      }
      
    }
  }
  for(i=0;i<G;i++){
  
      t+=d[i];
    
  }
  
  
  
}

int main(){

  int x,i,j;

  scanf("%d",&x);

  for(i=0;i<x;i++){
    for(j=0;j<x;j++){
      scanf("%d",&A[i][j]);
      color[i]   =WHITE;
    }
  }
  prim(x,0);

  printf("%d\n",t);

  return 0;
}

