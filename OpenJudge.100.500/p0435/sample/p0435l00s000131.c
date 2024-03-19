#include <math.h>
#include <stdio.h>

int main() {
  int N, D;
  scanf("%d%d", &N, &D);
  int x[N];
  int y[N];
  int count = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d%d", &x[i], &y[i]);
  }
  double distance = 0;
  for (int j = 0; j < N; j++) {
    distance = sqrt(x[j] * x[j] + y[j] * y[j]);
    if (distance <= D) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}