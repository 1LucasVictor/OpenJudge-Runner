#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, D, i;
  int *x, *y;
  double *distance;
  int count = 0;

  scanf("%d%d", &N, &D);

  x = malloc(sizeof(int *) * N);
  y = malloc(sizeof(int *) * N);
  distance = malloc(sizeof(double *) * N);

  for (i = 0; i < N; i++) {
    scanf("%d%d", &x[i], &y[i]);
  }
  for (i = 0; i < N; i++) {
    distance[i] = sqrt((x[i] * x[i]) + (y[i] * y[i]));
    if (distance[i] <= D) count++;
    // printf("%d %d %f\n", x[i], y[i], distance[i]);
  }

  printf("%d\n", count);

  free(x);
  free(y);
  free(distance);
  return 0;
}