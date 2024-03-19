#include <stdio.h>
#define N 101

int A[N][N], n, i, j, u, k, v;

int main(){

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d", &v);
      A[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      //if(A[i][j] == 1) printf("1");
      //eelse printf("0");
      printf("%d",A[i][j]);
      if(j < n - 1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}