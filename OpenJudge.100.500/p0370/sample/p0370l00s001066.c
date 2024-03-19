#include <stdio.h>

int
main(void)
{
  int a, b, ans;
  char op;
  while (1) {
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+') {
      ans = a + b;
    } else if (op == '-') {
      ans = a - b;
    } else if (op == '*') {
      ans = a * b;
    } else if (op == '/') {
      ans = a / b;
    } else {
      break;
    }
    printf("%d\n", ans);
  }
}