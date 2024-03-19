#include<stdio.h>
#define MAX 100
#define INF (1<<21)

int n, stage[MAX][MAX];

void dijkstra(){
  int i, minv;
  int mincost[MAX], flag[MAX];

  for(i = 0; i < n; i++){
    mincost[i] = INF;
    flag[i] = 0;
  }

  mincost[0] = 0;
  flag[0] = 1;

  while(1){
    minv = INF;
    int u = -1;
    for(i = 0; i < n; i++){
      if(minv > mincost[i] && flag[i] != 2){
	u = i;
	minv = mincost[i];
      }
    }
    if(u == -1) break;
    flag[u] = 2;
    for(i = 0; i < n; i++){
      if(flag[i] != 2 && stage[u][i] != INF){
	if(mincost[i] > mincost[u] + stage[u][i]){
	  mincost[i] = mincost[u] + stage[u][i];
	  flag[i] = 1;
	}
      }
    }
  }
  for(i = 0; i < n; i++){
    if(mincost[i] == INF) printf("%d %d\n", i, -1);
    else printf("%d %d\n", i, mincost[i]);
  }
}

int main(){
  int i, j;
  int k, c, u, v;
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      stage[i][j] = INF;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d %d", &u, &k);
    for(j= 0; j < k; j++){
      scanf("%d %d", &v, &c);
      stage[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

