#include <stdio.h>

int main(void) {
  int n, i;
  scanf ("%d", &n);
  for (i = 2 ; i < n ; i++) {
    if (n % i == 0) {
      printf ("Yes");
      return 0;
    }
  }
  printf ("No");
  return 0;
}