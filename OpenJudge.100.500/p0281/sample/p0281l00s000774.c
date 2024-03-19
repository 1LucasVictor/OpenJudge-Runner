#include<stdio.h>
#define N 2000
#define INF 10000
#define WHITE 0
#define BLACK 1
int G[N][N],d[N],pi[N],color[N];
int n,k;

void dijkstra(){
  int i,j,u,v;
  int c,mincost;
  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){ 
    mincost = INF;
    for(i=0;i<n;i++){
      if (color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if (mincost == INF)
      break;
    color[u] = BLACK;
    c++;
    for (v=0;v<n;v++){
      if (color[v] != BLACK && (G[u][v] +d[u])< d[v]){
	d[v] = G[u][v]+d[u];
	pi[v] = u;
      }
    }
    if(c==n)break;
  }

  for(i=0;i<n;i++){
  printf("%d ",i);
  printf("%d\n",d[i]);
  } 
}
  
int main(){
  int i,j,u,c,v;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=INF;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
	scanf("%d%d",&v,&c);
	G[u][v]=c;
    }
  }
	
  dijkstra();

  return 0;
}