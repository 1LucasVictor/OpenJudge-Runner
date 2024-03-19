#include <stdio.h>

int max_profit(int max, int r) {
  if (max >= r)
    return max;
  return r;
}

int min_profit(int min, int r) {
  if (min <= r)
    return min;
  return r;
}

int main(void) {
  int n;
  int i, j;
  int r[1000000];
  int max, min;

  scanf("%d", &n);

  for (i = 0; i < n; i ++) {
    scanf("%d", &r[i]);
  }

  max = r[1] - r[0];
  min = r[0];
  for (i = 1; i < n; i++) {
    max = max_profit(max, r[i] - min);
    min = min_profit(min, r[i]);
  }

  printf("%d\n", max);
  
  return 0;
}

