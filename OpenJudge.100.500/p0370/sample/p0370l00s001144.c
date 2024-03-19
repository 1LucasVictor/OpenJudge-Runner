#include <stdio.h>

int main(void){
  int a, b, data;
  char p;
  do{
    scanf("%d %c %d", &a, &p, &b);
    if(p=='?')  break;

    if(p=='+') data = a + b;
    if(p=='-') data = a - b;
    if(p=='*') data = a * b;
    if(p=='/'){
      if(b == 0)  break;
      else   data = a / b;
    }
    printf("%d\n", data);
  }while(1);

  return 0;
}

