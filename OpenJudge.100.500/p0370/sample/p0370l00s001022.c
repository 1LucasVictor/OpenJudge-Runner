#include<stdio.h>
int main(void){
  int a = 0,b = 0;
  char op = 0;

  do {

    scanf("%d %c %d", &a, &op, &b);

  if (op == '+'){
    printf("%d\n",a + b);
  } else if (op == '-'){
    printf("%d\n",a - b);
  } else if (op == '*'){
    printf("%d\n",a * b);
  } else if (op == '/'){
    printf("%d\n",a / b);
  } else {
    return 0;
  }
  }while(1);

}