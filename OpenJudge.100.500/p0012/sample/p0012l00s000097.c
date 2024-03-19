#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, stack[10], p = 0;

  while (scanf("%d", &num) != EOF) {
    if (num == 0) {
      printf("%d\n", stack[--p]);
    } else {
      stack[p++] = num;
    }
  }

  return EXIT_SUCCESS;
}