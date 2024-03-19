#include <stdio.h>
#include <math.h>

int main(void){
  int a, b;
  char op;


  while ( scanf("%d %c %d", &a, &op, &b) != EOF){
if ( op == '+' ){
  printf("%d\n", a + b);
} else if ( op == '-' ){
  printf("%d\n", a - b);
} else if ( op == '*' ){
  printf("%d\n", a * b);
} else if ( op == '/' ){
  printf("%d\n", a / b);
 } else if (op == '?'){
  break;
}
  }
  return 0;
}

