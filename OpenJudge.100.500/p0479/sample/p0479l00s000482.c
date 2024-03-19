#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define LINE_BUF_SIZE  1024

int main(void) {
  
  int i;
  int N;
  int A[200000];
  int B[200000];
  int sum = 0;
  

  scanf("%d",&N);
  for(i = 0; i < N ; i++){
      scanf("%d",&A[i]);
      B[A[i]-1]++;
  }
  
  for(i = 0; i < N; i++){
      printf("%d\n",B[i]);
  }
  
  return 0;
}