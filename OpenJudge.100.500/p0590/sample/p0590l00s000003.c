#include <stdio.h>

int main(void) {

  int a, b, c, d, e, k;

  do {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);
  } while (a < 0 || a > 123 || b < 0 || b > 123 || c < 0 || c > 123 || d < 0 || d > 123 || e < 0 || e > 123 || k < 0 || k > 123);

  int dist[10] = { b - a, c - a, d - a, e - a, b - c, b - d, b - e, c - d, c - e, d - e};

  int n = 0;
  for (int i = 0; i < 10; i++) {
    if (dist[i] > k) {
      n--;
    }
  }

  if (n < 0) {
    printf(":(\n");
  } else {
    printf("Yay!\n");
  }

  return 0;
}