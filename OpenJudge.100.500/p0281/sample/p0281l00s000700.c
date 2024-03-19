#include<stdio.h>

#define MAX 100
#define INFINITY 111111111
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];

void dijkstra(){
  int minv;
  int d[MAX], unchi[MAX];
  int i, u, v;

  for(i = 0; i < n; i++){
    d[i] = INFINITY;
    unchi[i] = WHITE;
  }

  d[0] = 0;
  unchi[0] = GRAY;
  while(1){
    minv = INFINITY;
    u = -1;
    for(i = 0; i < n; i++){
      if(minv > d[i] && unchi[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }

    if(u == -1)break;
    unchi[u] = BLACK;
    for(v = 0; v < n; v++){
      if(unchi[v] != BLACK && M[u][v] != INFINITY){
	if(d[v] > d[u] + M[u][v]){
	  d[v] = d[u] + M[u][v];
	  unchi[v] = GRAY;
	}
      }
    }
  }
  for(i = 0; i < n; i++){
    printf("%d %d\n", i, (d[i] == INFINITY ? -1 : d[i]));
  }
}

int main(){
  int i, j;
  
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      M[i][j] = INFINITY;
    }
  }

  int k, c, u, v;
  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d%d",&v, &c);
      M[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

