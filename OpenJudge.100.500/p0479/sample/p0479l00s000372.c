#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define LINE_BUF_SIZE  1024

int main(void) {
  
  int i;
  int N;
  int A[200010];
  int B[200010];
  
  

  scanf("%d",&N);
  for(i = 0; i < N; i++){
      B[i] = 0;
  }
  for(i = 2; i <= N ; i++){
      scanf("%d",&A[i]);
      B[A[i]]++;
  }
  
  for(i = 1; i <= N; i++){
      printf("%d\n",B[i]);
  }
  
  return 0;
}