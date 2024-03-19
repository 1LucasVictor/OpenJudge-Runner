#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int min = MIN(b, d);
  int max = MAX(a, c);
  if (min - max < 0) printf("%d\n", 0);
  else               printf("%d\n", min - max);
  return 0;
}