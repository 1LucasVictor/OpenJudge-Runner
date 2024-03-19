#include<stdio.h>
#include<stdlib.h>
#define MAX 101
#define INF 1000000

void initializeSingleSource();
void dijkstra();

int i,j,n,w,U,u[MAX],k[MAX],result=0,mincost,pi[MAX],color[MAX],d[MAX],c[MAX][MAX],v[MAX][MAX];

int main(){
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
    scanf("%d %d",&u[i],&k[i]);
    for(j=0 ; j<k[i] ; j++){
      scanf("%d %d",&v[i][j],&c[i][j]);
    }
  }

  dijkstra();

  for(i=0 ; i<n ; i++){
    printf("%d %d\n",u[i],d[i]);
  }
  return 0;
}


void initializeSingleSource(){
  for(i=0 ; i<n ; i++){
    d[i]=INF;
    color[i]=0;
   
  }
  d[0]=0;
}
void dijkstra(){
  initializeSingleSource();
  while(1){
    mincost=INF;
    for(i=0 ; i<n ; i++){
      if(color[i] != 1 && d[i] < mincost){
	mincost=d[i];
	U=i;
      }
    }
      if(mincost == INF)break;
      color[U]=1;

      for(w=0 ; w<k[U] ; w++){
	if(color[v[U][w]] != 1 && (d[U]+c[U][w]) < d[v[U][w]]){
	
	  d[v[U][w]]=d[U]+c[U][w];
	  }
      }
  }
}
	  

	       	  
 