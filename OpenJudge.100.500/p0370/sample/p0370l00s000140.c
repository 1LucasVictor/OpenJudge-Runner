#include <stdio.h>

int main(){
  int a, b;
  char op;

  while(scanf("%d%s%d", &a, &op, &b)){
    switch(op){
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