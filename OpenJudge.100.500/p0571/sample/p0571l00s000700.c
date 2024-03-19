#include <stdio.h>

#define MIN(A,B) ((A) < (B) ? (A) : (B))

int main() {
  int n, a, b, train, taxi;
  scanf("%d %d %d", &n, &a, &b);
  train = a * n;
  taxi = b;
  printf("%d\n", MIN(train, taxi));
  return 0;
}