#include <stdio.h>

int main() {
  int i, j;
  int h, w;

  while(scanf("%d %d", &h, &w) != EOF) {
    for(i = 0; i < h; i++) {
      for(j = 0; j < w; j++) {
        printf("%c", (i != 0 && i != (h - 1) && j != 0 && j != (w - 1)) ? '.' : '#');
      }
      printf("\n");
    }
  }

  return 0;
}