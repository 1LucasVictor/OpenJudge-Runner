#include<stdio.h>
#define INF 100000
#define NIL -1
#define MAX 101
#define WHITE 0
#define BLACK 1

int main(){
  int i,j,u,v,k,n;
  int mincost,sum=0;
  int a[MAX][MAX],d[MAX],pi[MAX],color[MAX];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j] = INF;
      //a[i][j] = NIL;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    //printf("u=%d k=%d\n",u,k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&a[u][v]);
      a[v][u] = a[u][v];
    }
  }
  /*
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }      
  */ 
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
      if(color[v]!=BLACK && a[u][v]< d[v]){ // a[u][v]
	pi[v] = u;
	d[v] = a[u][v] + d[u]; // a[u][v]
      }
    }
    
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  
  return 0;
}