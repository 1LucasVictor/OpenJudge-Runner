#include <stdio.h>

int main(void) {
  int a, b;
  char op;
  while (1) {
    scanf(" %d %c %d", &a, &op, &b);
    switch (op) {
    case '?':
      return 0;
      break;
    case '+':
      printf("%d\n", a + b);
      break;
    case '-':
      printf("%d\n", a - b);
      break;
    case '*':
      printf("%d\n", a * b);
      break;
    case '/':
      printf("%d\n", a / b);
      break;
    }
  }
}

