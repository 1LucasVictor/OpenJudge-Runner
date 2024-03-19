#include <stdio.h>
#define N 101
#define INF 100001
#define WHITE 0
#define BLACK -1

main(){
  int i, j, k, n, u, v, min;
  int graph[N][N], color[N], d[N];

  scanf("%d", &n);

  for( i = 0; i < n; i++){
    color[i] = WHITE;
    d[i] = INF;
    for( j = 0; j < n; j++){
      graph[i][j] = -1;
    }
  }

  for( i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for( j = 0; j < k; j++){
      scanf("%d", &v);
      scanf("%d", &graph[u][v]);
    }
  }

  d[0] = 0;
  while(1){
    min = INF;

    for( i = 0; i < n; i++){
      if( color[i] != BLACK && d[i] < min ){
        min = d[i];
        u = i;
      }
    }

    // printf("([u] = %d)\n", u);

    if( min == INF )
      break;

    for( v = 0; v < n; v++){
      if( graph[u][v] != -1 ){
        if( color[v] != BLACK && d[u]+graph[u][v] < d[v] ){
          d[v] = d[u]+graph[u][v];
          // printf("(d[%d] = %d)\n", v, d[v]);
        }
      }
    }

    color[u] = BLACK;

  }

  for( i = 0; i < n; i++){
    printf("%d %d\n", i, d[i]);
  }

  return 0;

}