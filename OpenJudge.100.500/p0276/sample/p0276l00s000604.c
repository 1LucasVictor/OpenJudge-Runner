#include <stdio.h>

main(){

  int i, j, n, m, l;
  int e[101][101];

  scanf("%d", &n);

  for(i = 1; i <= n; i++){
    scanf("%d %d", &e[i][0], &m);

    for(j = 1; j <= n; j++){ 
      e[i][j] = 0;
    }
    
    for(j = 1; j <= m; j++){
      scanf("%d", &l);
      e[i][l] = 1;
    }

  }

  for(i = 1; i <= n; i++){
    for(j = 1; j < n; j++){
      printf("%d ", e[i][j]);
    }
    printf("%d\n", e[i][j]);
  }

  return 0;

}