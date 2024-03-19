#include<stdio.h>

int main(void){
  int a,b;
  char op;

  scanf("%d %c %d", &a, &op, &b);

  while(op!='?'){
    int ans;
    if(op=='+') ans = a + b;
    if(op=='-') ans = a - b;
    if(op=='*') ans = a * b;
    if(op=='/') ans = a / b;
    
    printf("%d\n", ans);
    
    scanf("%d %c %d", &a, &op, &b);
  }
  return 0;
}

