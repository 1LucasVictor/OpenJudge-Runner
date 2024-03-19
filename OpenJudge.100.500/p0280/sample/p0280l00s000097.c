#include <stdio.h>
#include <stdlib.h>
#define INF 2001
#define NIL -1
#define WHITE 0
#define BLACK 1

main(){
	int n, i, j, u, cost=0, mincost;
	int **G, *tmp;
	int *flag;
	int *d, *pi;

	scanf("%d", &n);
	flag = (int*)malloc(sizeof(int) * n);
	d = (int *)malloc(sizeof(int)*n);
	pi = (int *)malloc(sizeof(int)*n);
	G = (int**)malloc(sizeof(int*) * n);
	tmp = (int*)malloc(sizeof(int) * n * n);
	for (i = 0; i < n; i++){
		G[i] = tmp + i * n;
	}

	for (i = 0; i < n; i++){
		flag[i] = WHITE;
		d[i]=INF;
		pi[i]=NIL;
		for (j = 0; j < n; j++){
			scanf("%d", &G[i][j]);
		}
	}

	// [0]を開始点
	u=0;
	d[u]=0;

	while(1){
	  mincost = INF;
	  for(i=0; i<n; i++){
	    if(flag[i]!=BLACK && d[i]<mincost){
	      mincost = d[i];
	      u=i;
	    }
	  }
	  if(mincost == INF) break;
	  flag[u] = BLACK;
	  cost += mincost;

	  for(i=0; i<n; i++){
	    if(G[u][i]!=-1 && flag[i]!=BLACK && G[u][i]<d[i]){
	      d[i]=G[u][i];
	      pi[i] = u;
	    }
	  }  
	}

	printf("%d\n", cost);

	free(tmp);
	free(G);
	free(flag);

	return 0;
}