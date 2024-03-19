#include <stdio.h>

int main() {
  int i, j, H, W;

  while (1) {
    scanf("%d %d", &H, &W);
    if (H == 0 && W == 0)
      break;
    for (i = 0; i < W; i++) putchar('#');
    putchar('\n');
    for (i = 0; i < H - 2; i++) {
      putchar('#');
      for (j = 0; j < W - 2; j++) putchar('.');
      puts("#");
    }
    for (i = 0; i < W; i++) putchar('#');
    putchar('\n');
  }

  return 0;
}