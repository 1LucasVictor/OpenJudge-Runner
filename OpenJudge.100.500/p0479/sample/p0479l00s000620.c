#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int N;
  scanf("%d", &N);
  int A[N];
  int b[N];
  for(int i = 0; i < N-1; i++){
    scanf("%d", &A[i]);
    b[i] = 0;
  }
  b[N-1] = 0;
  for(int i = 0; i < N-1; i++){
    b[A[i]-1] += 1;
  }

  for(int i = 0; i < N; i++){
    printf("%d\n", b[i]);
  }

  return 0;
  }
