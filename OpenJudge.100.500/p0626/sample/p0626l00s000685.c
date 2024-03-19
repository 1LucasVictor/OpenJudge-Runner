#include <stdio.h>

int main(void) {
  int D, N;
  scanf("%d%d", &D, &N);

  int X;
  if(D == 0) {
    X = 1;
  } else if(D == 1) {
    X = 100;
  } else {
    X = 10000;
  }

  if(N != 100)
    X *= N;
  else
    X *= (N+1);
  printf("%d\n", X);

  return 0;
}
