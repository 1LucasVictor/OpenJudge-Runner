#include <stdio.h>
#define N 100
#define inf 10000000
#define NIL -1
#define BLACK 1
#define WHITE 0

int n,k,d[N],pi[N],G[N][N],color[N];

void initializeSingleSouurse(int);
void dijkstra(int);
int main(){
  int i,j,k,u,v,c;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=0;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      G[i][v]=c;
    }
  }
  //printf("test\n");
  dijkstra(0);
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}

void initializeSingleSouurse(int s){
  int i,j;

  for(i=0;i<n;i++){
    d[i]=inf;
    pi[i]=NIL;
    color[i]=WHITE;
  }
  d[s]=0;
}
    
void dijkstra(int s){
  int u,mincost,v,i;
  
  initializeSingleSouurse(s);
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
    for(v=0;v<n;v++){
      if(G[u][v]==0) continue;
      if(color[v]!=BLACK && d[u]+G[u][v]<d[v]){
	pi[v]=u;
	d[v]=d[u]+G[u][v];
      }
    }
  }
}
    
    

