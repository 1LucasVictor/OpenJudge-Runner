#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, K;
  int minimum;
  int more = 0;

  scanf("%d", &N);
  scanf("%d", &K);

  if (N > K) {
    minimum = K;
  }else{
    minimum = N;
  }
  while (more < 65536) {
    if (N < minimum) {
      minimum = N;
      more = 0;
    } else {
      more++;
    }
    if (N > K) {
      N = N - K;
    }else{
      N = K - N;
    }
  }

  printf("%d\n", minimum);

  return 0;
}