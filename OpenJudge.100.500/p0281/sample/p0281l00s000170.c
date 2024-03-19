#include<stdio.h>
#define MAX 101
#define INF 99999999
#define WHITE 0
#define BLACK 1
#define GRAY 2


int n,A[MAX][MAX],d[MAX],color[MAX],pi[MAX];




void dijkstra(void){
  int mincost,i,v,u;

  
  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;

  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF){
      break;
    }
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && d[u]+A[u][v]<d[v]){
	pi[v]=u;
	d[v]=d[u]+A[u][v];
      }
    }
  }
}


int main(){
  int i,j,u,k,v,c;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INF;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v]=c;
    }
  }

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  
  return 0;
}


  

