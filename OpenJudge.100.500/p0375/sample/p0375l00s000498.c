#include <stdio.h>

int main(void) {
  int i;
  int num;

  scanf("%d", &num);
  for (i = 3; i <= num; i++) {
    if (i % 3 == 0 || i % 10 == 3) {
      printf(" %d", i);
    }
  }
  putchar('\n');

  return 0;
}

