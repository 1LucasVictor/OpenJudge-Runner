#include <stdio.h>

int main()
{
  int N, i, j, k, A[100], v;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }
    
  for(k = 0; k < N; k++){
    printf("%-2d", A[k]);
  }
  printf("\n");  
  
  for(i = 1; i <= N - 1; i++){ 
    v = A[i];
    j = i - 1;

    while(j >= 0 && A[j] > v){
      
      A[j + 1] = A[j];
      j--;
      A[j + 1] = v;
    }
    
    for(k = 0; k < N; k++){
      printf("%-2d", A[k]);
    }
    printf("\n");  
  }
  return 0;
}