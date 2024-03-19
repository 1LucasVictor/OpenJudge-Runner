#include<stdio.h>
#define N 100
#define MAX 2000
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2


int A[N][N], n;

void dijkstra(){
  int i, u, v, minv, sum = 0;
  int d[N], color[N];

  for( i = 0 ; i < n ; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INFTY;
    u = -1;
    for( i = 0; i < n ; i++){
      if(minv > d[i] && color[i] != BLACK){
        u = i;
        minv = d[i];
      }
    }
    if( u == -1 ) break;
    color[u] = BLACK;
    for( v = 0 ; v < n ; v++){
      if( color[v] != BLACK && A[u][v] != INFTY ){
        if( d[v] > d[u] + A[u][v] ){
          d[v] = d[u] + A[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
  for( i = 0 ; i < n ; i++ ){
    printf("%d %d\n", i, (d[i] == INFTY ? -1 : d[i]));
  }
}


int main(){
  int i, j, s;
  int u, v, c, k;
  scanf("%d", &n);
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j ++){
      A[i][j] = INFTY;
    }
  }
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d", &u, &k);
    for( j = 0 ; j < k ; j ++){
      scanf("%d%d", &v, &c);
      A[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

