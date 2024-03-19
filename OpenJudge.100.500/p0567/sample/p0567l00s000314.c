#include <stdio.h>

int main(int argc, char* argv[]) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int c1 = c - (a - b);

  if (c1 < 0) printf("0\n");
  else printf("%d\n", c1);

  return 0;
}
