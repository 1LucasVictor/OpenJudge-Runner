#include <stdio.h>
#define M 1000

int main(){
  int i,j,k,m,n,u;
  int Ad[M][M];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&u,&k);
    for(j = 0 ; j < k ; j++){
      scanf("%d",&m);
      Ad[u-1][m-1] = 1;
    }
  }

  for(i = 0 ; i < n ; i++){
    for (j = 0 ; j < n-1 ; j++){
      printf("%d ", Ad[i][j]);
    }
    printf("%d\n", Ad[i][j]);
  }

  return 0;
}

