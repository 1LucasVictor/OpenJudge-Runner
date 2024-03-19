#include <stdio.h>

int main()
{
  int a, b, ans;
  char operator;
  for (int i=1;;i++) {
    scanf("%d %c %d", &a, &operator, &b);
    if (operator == '+') printf("%d\n", a+b);
    else if (operator=='-') printf("%d\n", a-b);
    else if (operator=='*') printf("%d\n", a*b);
    else if (operator=='/') printf("%d\n", a/b);
    else if (operator=='?') break;
  }
  return 0;
}
