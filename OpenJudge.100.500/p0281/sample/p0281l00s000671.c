#include <stdio.h>
#include <limits.h>
#define N 1000
#define WHITE 0
#define BLACK 1
#define NILL -1

int d[N];
int w[N][N];/*w[i][j]にiからjへ移動する*/
int color[N];/*Sに含まれるかを確認*/
int v;

int main(void){

  int n,i,j,mincost,u,k;
  int s=0;/*スタート地点*/

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j] = INT_MAX;
    }
  }

  for(i=0;i<n;i++){
    d[i] = INT_MAX;
    color[i] = 0;
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&w[u][v]);
    }
  }

  d[s] = 0;

  while(1){
    mincost = INT_MAX;
      for(i=0;i<n;i++){
	if(d[i] < mincost && color[i] == WHITE){
	  mincost = d[i];
	  u = i;
	}
      }

    if(mincost == INT_MAX) break;

    color[u] = BLACK;

    for(v=0;v<=n;v++){
      if(w[u][v] == INT_MAX) continue;
      if(d[v] > d[u] + w[u][v]){
	d[v] = d[u] + w[u][v];
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}