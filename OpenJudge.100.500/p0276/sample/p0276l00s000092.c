#include <stdio.h>

#define N 101

int main(){
  int n, i, j, G[N][N], num, k, v;

  scanf("%d", &n);

  for(i = 1; i <= n; i++)
    for(j = 1; j <= n; j++)
      G[i][j] = 0;

  for(i = 1; i <= n; i++){
    scanf("%d%d", &num, &k);

    if(k == 0)
      continue;

    for(j = 1; j <= k; j++){
      scanf("%d", &v);
      G[num][v] = 1;
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      printf("%d", G[i][j]);
      if(j != n)
	printf(" ");
    }

    printf("\n");
  }
  return 0;
}

