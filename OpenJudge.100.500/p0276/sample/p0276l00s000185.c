#include <stdio.h>

#define G_MAX 100

int main(){
  int n;
  int i,j;
  int u,k,v;
  int G[G_MAX][G_MAX];
  for (i = 0 ; i < G_MAX ; i++) {
    for (j = 0 ; j < G_MAX ; j++) {
      G[i][j] = 0;
    }
  }
  
  scanf("%d",&n);
  
  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&u,&k);
    u=u-1;
    for(j = 0 ; j < k ; j++){
      scanf("%d",&v);
      v=v-1;
      G[u][v] = 1;
    }
  }
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      printf("%d%c",G[i][j],(j < n-1 ? ' ' : '\n'));
    }
  }
  return 0;
}

