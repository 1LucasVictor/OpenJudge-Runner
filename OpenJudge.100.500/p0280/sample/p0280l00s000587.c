#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j, e, sum,u,min;
  int A[MAX][MAX],vis[MAX],cost[MAX],pi[MAX];

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      A[i][j] = (e==-1)?INFTY:e;
    }
  }

  for (i = 0; i < n; i++ ){
    cost[i] = INFTY;
    vis[i] = 0; 
    pi[i] = -1;
  }
  cost[0] = 0;
  while (1){
    u = -1;
    min = INFTY;
    for (i = 0; i < n; i++ ){
      if (cost[i] < min && !vis[i]){
    u = i;
    min = cost[i];
      }
    }
    if (u  == -1 ) break;
    vis[u] = 1;   
    for (i = 0; i < n; i++ ){         
      if ( A[u][i] < cost[i] && !vis[i]){
    cost[i] = A[u][i];
    pi[i] = u;
      }
    }
  }

  sum = 0;
  for ( i = 0; i < n; i++ ){
    if ( pi[i] != -1 ) sum += A[i][pi[i]];
  }
  printf("%d\n", sum);

  return 0;
}