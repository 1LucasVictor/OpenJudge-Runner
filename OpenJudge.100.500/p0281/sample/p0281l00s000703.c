#include<stdio.h>

#define N 100
#define INF 10000
#define WHITE 1
#define BLACK 0

int main(){

  int d[N], color[N], w[N][N];
  int i, j, v, c;
  int n, u, k;
  int mincost;

  scanf("%d",&n);
  for(i = 0; i < n; i++){
	for(j = 0; j  < n; j++){
	  w[i][j] = -1;
	}
  }

  for(i = 0; i < n; i++){
	scanf("%d %d",&u, &k);
	for(j = 0; j < k; j++){
	  scanf("%d %d", &v, &c);	 
	  w[i][v] = c;
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
	
	for(v = 0; v < n; v++){
	  if(w[u][v] == -1) continue;
	  if(d[v] >  d[u] + w[u][v]) d[v] = d[u] + w[u][v];
	}
  }   
  for(i = 0; i < n; i++){ 
	printf("%d %d\n",i, d[i]);
  }

  return 0;
}