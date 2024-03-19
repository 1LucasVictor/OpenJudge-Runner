#include <stdio.h>

int main(void) {
  int n,m,l,A[100][100],B[100][100],i,j,k;
  long int c[100][100];
  scanf(" %d %d %d",&n,&m,&l);
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < m; i++){
    for(j = 0; j < l; j++){
      scanf("%d",&B[i][j]);
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < l; j++){
      c[i][j] = 0;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < l; j++){
      for(k = 0; k < m; k++){
        c[i][j] += A[i][k] * B[k][j];
      }
      printf("%ld",c[i][j]);
      if(j != l - 1){
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
