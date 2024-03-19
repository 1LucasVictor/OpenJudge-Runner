#include <stdio.h>
 
#define MAX_N 100
 
int main(){
  int N,u,k,v,i,j;
  int G[MAX_N][MAX_N];
  for (i = 0 ; i < MAX_N ; i++) {
    for (j = 0 ; j < MAX_N ; j++) {
      G[i][j] = 0;
    }
  }
  scanf("%d",&N);
  for(i = 0 ; i < N ; i++){
    scanf("%d%d",&u,&k); u--;
    for(j = 0 ; j < k ; j++){
      scanf("%d",&v); v--;
      G[u][v] = 1;
    }
  }
  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      printf("%d%c",G[i][j],(j < N-1 ? ' ' : '\n'));
    }
  }
  return 0;
}

