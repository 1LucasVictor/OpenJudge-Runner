#include <stdio.h>
#define N 1000
#define INF 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, A[N][N];
void dijkstra();

int main(){
  int i, j, u, k, v, c;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      A[i][j] = INF;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }


  /* printf("test\n"); */
  dijkstra();

  return 0;
}

void dijkstra(){
  int i, u, v, minc;
  int c[N], d[N];

  for(i=0; i<n; i++){
    c[i] = WHITE;
    d[i] = INF;
  }
  d[0] = 0;
  c[0] = GRAY;

  while(1){
    minc = INF;
    u = -1;
    for(i=0; i<n; i++){
      if(c[i] != BLACK && d[i] < minc){
	minc = d[i];
	u = i;
      }
    }
    if(minc == INF) break; 
    c[u] = BLACK;
    for(v=0; v<n; v++){
      if(c[v] != BLACK && A[u][v] != INF){
	if(d[u] + A[u][v] < d[v]){
	  d[v] = d[u] + A[u][v];
	  c[v] = GRAY;
	}
      }
    }
  }
  for(i=0; i<n; i++){
    if(d[i] == INF) {
      printf("%d -1\n", i);
    } else printf("%d %d\n",i ,d[i]);
  }
}