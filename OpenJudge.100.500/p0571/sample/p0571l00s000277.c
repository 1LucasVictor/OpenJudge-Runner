#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int X[100], Y[100];

int main() {
  int N, A, B, result;
  int i;
  scanf ("%d %d %d", &N, &A, &B);
  
  result = A * N;
  result = (result>B) ? B : result;
  
  
  printf("%d", result);
  return 0;
}


