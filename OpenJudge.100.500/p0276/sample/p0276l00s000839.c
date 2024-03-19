#include <stdio.h>

int main(){
  int n, u, k, v;
  int i, j;
  int g[101][101];

  scanf("%d", &n);

  for(i = 0; i <= n; i++){
    for(j = 0; j <= n; j++){
      g[i][j] = 0;
    }
  }

  for(i = 1; i <= n; i++){
    scanf("%d", &u);
    scanf("%d", &k);

    for(j = 1; j <= k; j++){
      scanf("%d", &v);

      g[u][v] = 1;
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      printf("%d", g[i][j]);

      if(j != n) printf(" ");
    }

    printf("\n");
  }

  return 0;
}

