#include<stdio.h>
#define MAX 100
#define INF 1e8
#define WHITE 0
#define GRAY  1
#define BLACK 2

int n,M[MAX][MAX];

void dijkstra(){
  int color[MAX],d[MAX],p[MAX],min,u;
  int i,j,v;

  for(i=0;i<n;i++){
    color[i] = WHITE;
    d[i] = INF;
  }
  d[0] = 0;
  p[0] = -1;

  while(1){
    min = INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<min){
	min = d[i];
	u = i;
      }
    }

    if(min == INF) break;
    color[u] = BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=INF){
	if(d[u]+M[u][v] < d[v]){
	  d[v] = d[u] + M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    } 
  }

  for(i=0;i<n;i++) printf("%d %d\n",i,(d[i]==INF ? -1: d[i]));
}

int main(){
  int u,k,v,c;
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++) for(j=0;j<n;j++) M[i][j]=INF;
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&M[u][v]);
    }
  }
  dijkstra();
  
  return 0;
}

