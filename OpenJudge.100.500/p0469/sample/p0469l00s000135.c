#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i;
  int K,A,B;
  long cnt = 0;
  scanf("%d", &K);
  scanf("%d %d", &A, &B);
  if (K == 1) {
    printf("OK\n");
    return 0;
  }
    int c = (A / K) * K + K;
    int d = B / K;
    if (c < B) {
      printf("OK\n");
    } else {
      printf("NG\n");
    }
    return 0;
  }