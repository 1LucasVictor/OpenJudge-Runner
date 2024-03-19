#include <stdio.h>

void YesNo (int x, int y, int z) {
  if (x * x + y * y == z * z) {
    printf ("YES\n");
  } else if (x * x == y * y + z * z) {
    printf ("YES\n");
  } else if (y * y == z * z + x * x) {
    printf ("YES\n");
  } else {
    printf ("NO\n");
  }
}

int main (void) {
  int x = 0, y = 0, z = 0;
  int i = 0, N = 0;
  scanf ("%d", &N);
  for (i = 0;i < N;i++) {
    scanf ("%d %d %d", &x, &y, &z);
    YesNo(x, y, z);
  }

  return 0;
}