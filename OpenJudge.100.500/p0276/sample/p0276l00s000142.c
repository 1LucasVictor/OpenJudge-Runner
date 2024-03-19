#include<stdio.h>

int main(){
  int i, j, n, k, a, b;
  int A[101][101];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < 0; j++){
      A[i][j] = 0;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &a, &k);

    if(k != 0){
      for(j = 0; j < k; j++){
        scanf("%d", &b);
        A[a - 1][b - 1] = 1;
      }
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d", A[i][j]);
      
      if(j != n - 1) printf(" ");
    }
    
    printf("\n");
  }
  
  return 0;
}