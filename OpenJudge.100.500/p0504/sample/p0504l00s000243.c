#include <stdio.h>

int main(void) {
  int H, A;
  scanf("%d%d", &H, &A);
  int x = 0;
  while (H > 0) {
    H -= A;
    ++x;
  }
  printf("%d\n", x);
}