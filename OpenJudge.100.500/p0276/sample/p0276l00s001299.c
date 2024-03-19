#include<stdio.h>
#define N 200

int main(void){
  int n, i, j, u, k, c, A[N][N];

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);

    for(j=0; j<k; j++){
      scanf("%d", &c);
      A[u-1][c-1] = 1;
    }
    
  }
  
  for(i=0; i<n; i++){
    
    for(j=0; j <n; j++){
      printf("%d", A[i][j]);
  if(j < k-1)printf(" ");
  
    }

 printf("\n");
 
  }
  
  return 0;
}