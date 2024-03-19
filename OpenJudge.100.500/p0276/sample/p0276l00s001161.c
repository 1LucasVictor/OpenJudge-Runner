#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,u,k,j;
  int *U;
  int G[103][103];

  /* 初期化 */
  for(i = 0;i < 103;i++){
    for(j = 0;j < 103;j++){
      G[i][j] = 0;
    }
  }

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&u);
    scanf("%d",&k);

    U = (int *)malloc(sizeof(int) * k);
    if(U == NULL) exit(0);

    for(j = 0;j < k;j++){
      scanf("%d",&U[j]);
      G[u][U[j]] = 1;
    }
  }

  /* 出力 */
  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      printf("%d",G[i][j]);
      if(j != n) printf(" ");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}