#include <stdio.h>

enum { S, H, C, D };

int main(void) {
  char c;
  int n, x, y, cards[4] = {0};

  scanf("%d", &n);

  while (n --> 0) {
    scanf("%c %d\n", &c, &x);

    switch (c) {
      case 'S':
        cards[S] |= 1 << (x - 1);
        break;
      case 'H':
        cards[H] |= 1 << (x - 1);
        break;
      case 'C':
        cards[C] |= 1 << (x - 1);
        break;
      case 'D':
        cards[D] |= 1 << (x - 1);
        break;
    }
  }

  for (x = 0; x < 4; x++) {
    for (y = 0; y < 12; y++) {
      if (!(cards[x] & (1 << y))) {
        printf("%c %d\n", "SHCD"[x], y + 1);
      }
    }
  }

  return 0;
}