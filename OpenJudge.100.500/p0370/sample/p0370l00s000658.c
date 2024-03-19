#include <stdio.h>

int main(void) {
  int a, b;
  char c[128];

  scanf("%d %s %d", &a, c, &b);
  while(c[0] != '?') {
    if (c[0] == '+')
      printf("%d\n", a + b);
    else if (c[0] == '-')
      printf("%d\n", a - b);
    else if (c[0] == '*')
      printf("%d\n", a * b);
    else if (c[0] == '/')
      printf("%d\n", a / b);
    scanf("%d %s %d", &a, c, &b);
     }

  return 0;
}
