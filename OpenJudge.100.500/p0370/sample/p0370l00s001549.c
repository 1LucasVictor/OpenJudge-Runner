#include <stdio.h>

int main(void) {
  int a, b;
  char op;
  scanf ("%d %c %d", &a, &op, &b );
  while(op != '?'){
    if ( op == '+' ) printf("%d\n", a + b);
    else if ( op == '-' ) printf("%d\n", a - b);
    else if ( op == '*' ) printf("%d\n", a * b);
    else if ( op == '/' ) printf("%d\n", a / b);
    else printf("Unexpexted syntax!! ERROR!!!\n");
    scanf ("%d %c %d", &a, &op, &b );
  }
  return 0;
}

