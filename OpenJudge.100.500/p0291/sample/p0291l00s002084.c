#include <stdio.h>

int main(void) {
  int n;
  int i, j;
  int r;
  int max, min;

  scanf("%d", &n);

  max = -1e9;
  min = 1e9;
  
   for (i = 0; i < n; i++) {
    scanf("%d", &r);
    min = (r < min) ? r : min;
    max = ((r - min) > max) ? (r - min) : max;
   }

  printf("%d\n", max);
  
  return 0;
}

