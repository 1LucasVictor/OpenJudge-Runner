#include <stdio.h>
int main(void){
  int N, a;
  scanf("%d", &N);
  int A[N], B[N];
  B[0] = 0;
  for(int i = 1; i < N; i++){
    scanf("%d", &A[i]);
    B[i] = 0;
  }
  for(int j = 1; j < N; j++){
    a = A[j] - 1;
    B[a] += 1;
  }
  for(int k = 0; k < N; k++){
    printf("%d\n", B[k]);
  }
  return 0;
} 