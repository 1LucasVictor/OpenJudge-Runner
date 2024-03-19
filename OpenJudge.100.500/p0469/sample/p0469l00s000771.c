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
  if (A == B) {
    if ((A / K )*K == A) {
      printf("OK\n");
    } else {
      printf("NG\n");
    }
    return 0;

  }
  int c;
  if (A % K == 0) {
    c = (A / K);
  } else {
    c = (A / K) + 1;
  }
    int d = B / K;
    if (c <= d) {
      printf("OK\n");
    } else {
      printf("NG\n");
    }
    return 0;
  }
