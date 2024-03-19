#include <stdio.h>

int main(void) {

  int a, b, calc;
  char mark;

  while(1) {
    scanf("%d %c %d", &a, &mark, &b);

    if (mark == '+') {
      calc = a + b;
    } else if (mark == '-') {
      calc = a - b;
    } else if (mark == '*') {
      calc = a * b;
    } else if (mark == '/') {
      calc = a / b;
    } else {
      break;
    }

    printf("%d\n", calc);
  }

  return 0;
}

