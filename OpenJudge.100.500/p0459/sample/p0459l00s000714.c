#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  int x, y;
  scanf("%d %d", &x, &y);
  if ((4 * x - y) % 2) printf("No\n");
  else if ((4 * x - y) / 2 <= x && (4 * x - y) / 2 >= 0) printf("Yes\n");
  else printf("No\n");

  return 0;
}
