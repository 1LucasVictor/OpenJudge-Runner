#include<stdio.h>
#define INF 100000
#define NIL -1
#define MAX 101
#define WHITE 0
#define BLACK 1

int main(){
  int i,j,u,v,n;
  int mincost,sum=0;
  int a[MAX][MAX],d[MAX],pi[MAX],color[MAX];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j]==-1) a[i][j] =INF;
    }
  }

  for(u=0;u<n;u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  d[0] = 0;

  while(1){

    mincost = INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost = d[i];
	u = i;
      }
    }
    
    if(mincost==INF)break;

    color[u] = BLACK;
    
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && a[u][v]< d[v]){
	pi[v] = u;
	d[v] = a[u][v];
      }
    }
    
  }
  for(i=0;i<n;i++){
    sum += d[i];
  }
  printf("%d\n",sum);
  return 0;
}