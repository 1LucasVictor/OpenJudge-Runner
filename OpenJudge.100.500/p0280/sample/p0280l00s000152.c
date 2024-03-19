#include<stdio.h>

#define N 100
#define INF 100
#define WHITE 1
#define BLACK 0

int main(){

  int d[N], color[N], w[N][N];
  int i, j, v;
  int n, u;
  int mincost;
  int count = 0;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
	for(j = 0; j < n; j++){
	  scanf("%d",&w[i][j]);
	}
  }
 
  for(i = 0; i < n; i++){
	d[i] = INF;
	color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
	mincost = INF;
	for(i = 0; i < n; i++){
	  if(d[i] < mincost && color[i] ==WHITE){
		mincost = d[i];
		u = i;
	  }
	}

	if(mincost == INF)break;
	color[u] = BLACK;
	count += mincost;
	
	for(v = 0; v < n; v++){
	  if(w[u][v] == -1) continue;
	  if(d[v] >  w[u][v]) d[v] =  w[u][v];
	}
  }   
  printf("%d\n", count);

  return 0;
}