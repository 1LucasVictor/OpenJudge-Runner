#include<stdio.h>
#define N 101

int main(){

  int i, j, a, n, u, k, v[N][N] = {};

  scanf("%d", &n);
  for(i = 1 ; i <= n ; i++){
    scanf("%d%d", &u, &k);
    for(j = 1 ; j <= k ; j++){
      scanf("%d", &a);
      v[u][a] = 1;
    }
  }

  for(i = 1 ; i <= n ; i++){
    for(j = 1 ; j <= n ; j++){
      printf("%d",v[i][j]);
      if(j != n){
	printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}