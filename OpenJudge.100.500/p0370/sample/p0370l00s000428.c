#include <stdio.h>

int main(void)
{
  int a, b;
  char op;

  while (1) {
    scanf("%d %c %d", &a, &op, &b);

    if (op == '?') {
      break;
    } else if (op == '+') {
      a += b;
    } else if (op == '-') {
      a -= b;
    } else if (op == '*') {
      a *= b;
    } else if (op == '/') {
      a /= b;
    }

    printf("%d\n", a);
  }

  return 0;
}