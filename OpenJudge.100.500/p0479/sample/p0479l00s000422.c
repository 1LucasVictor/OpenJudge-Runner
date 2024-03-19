#include <stdio.h>
int main(void) {
  
  int i;
  int N;
  int A[200010];
  int B[200010];
  scanf("%d",&N);
  for(i = 1; i <= N; i++){
      B[i] = 0;
  }
  for(i = 2; i <= N ; i++){
      scanf("%d",&A[i]);
  }
  for(i = 2; i <= N ; i++){
      B[A[i]] += 1;
  }
  for(i = 1; i <= N; i++){
      printf("%d\n",B[i]);
  }
  
  return 0;
}