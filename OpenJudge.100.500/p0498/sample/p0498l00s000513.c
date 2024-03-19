#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int cnt = 0;
  while (N - 2 >= 0) {
    N = N - 2;
    cnt++;
  }
  if (N == 1) {
    cnt++;
  }
  printf("%d\n", cnt);
}