#include<stdio.h>
#define MAX 100

int main(){

  int n,u,k,i,j,l,Adj[MAX],v[MAX],graph[MAX][MAX];

  scanf("%d",&n);

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      graph[i][j] = 0;
    }
  }

  for(i = 1; i <= n; i++){
    scanf("%d%d",&u,&k);
    for(j = 1; j <= k; j++){
      scanf("%d",&v[j]);
      graph[i][v[j]] = 1;
    }

  }
  
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      printf("%d",graph[i][j]);
      if(j < n) printf(" ");
    }
    printf("\n");
  }
  return 0;
}

  
  
  