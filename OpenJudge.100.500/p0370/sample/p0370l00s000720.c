#include <stdio.h>

int main(void) {
  char op = '?';
  int a = 0;
  int b = 0;
  int result = 0;

  scanf("%d %c %d", &a, &op, &b);

  while (op != '?') {
    if (op == '+') {
      result = a + b;
    } else if(op == '-') {
      result = a - b;
    } else if(op == '*') {
      result = a * b;
    } else if(op == '/') {
      result = a / b;
    }

    printf("%d\n", result);
    
    scanf("%d %c %d", &a, &op, &b);
  }

  return 0;
}