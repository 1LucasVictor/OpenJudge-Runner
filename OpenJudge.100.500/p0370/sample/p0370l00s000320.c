#include <stdio.h>

int main(){
  char op;
  int a,b,ans=0;  

  while(1){
    scanf("%d %c %d", &a, &op, &b);
    if(op == '?')
      break;
    if(op == '+') ans = a + b;
    if(op == '-') ans = a - b;
    if(op == '/') ans = a / b;
    if(op == '*') ans = a * b;
  
    printf("%d\n", ans);
  }
  
  return 0;
}