#include <stdio.h>

int main() {

  int i, n, d[10001], max = -1000000, min = 1000000, s = 0;
  scanf("%d", &n);
  for ( i = 0; i < n; i++) {
    scanf("%d", &d[i]);
    s = s + d[i];
    if ( d[i] < min )
      min = d[i];
    if ( d[i] > max)
      max = d[i];
  }
  printf("%d %d %d\n", min, max, s);

  return 0;

}