#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i;
  int N,A;
  int aa[200000]={};
  long cnt = 0;
  scanf("%d", &N);
  for (i = 0; i < N-1; i++) {
    scanf("%d", &A);
    aa[A - 1]++;
  }
  for (i = 0; i < N; i++) {
    printf("%d\n", aa[i]);
  }
    return 0;
  }
