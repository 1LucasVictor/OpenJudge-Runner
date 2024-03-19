#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BUF 5

int main(void) {
  char str[BUF];
  scanf("%s", str);
  if (!strncmp(str, "ABC", BUF)) {
    printf("ARC\n");
  } else if (!strncmp(str, "ARC", BUF)) {
    printf("ABC\n");
  }

  return 0;
}
