#include<stdio.h>
#define NIL -1

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j, k, c;
  int M[MAX][MAX];
  int d[MAX];
  int visited[MAX];
  int min = INFTY;
  int v, u;


  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  for(i = 0; i < n; i++){
    d[i] = INFTY;
    visited[i] = 0;
  }
  d[0] = 0;

  while(1){
    u = NIL;
    min = INFTY;

    for(i = 0; i < n; i++){
      if(d[i] < min && !visited[i]){
	u = i;
	min = d[i];
      }
    }

    if(u == NIL) break;
    visited[u] = 1;

    for(v = 0; v < n; v++){
      if(d[v] >= d[u] + M[u][v]){
	d[v] = d[u] + M[u][v];
      }
    }
  }


  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }

  return 0;
}