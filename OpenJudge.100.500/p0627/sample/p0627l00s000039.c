#include <stdio.h>

int max(int x, int y){
  if(x<=y)
  return y;
  else
  return x;
}

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int add, sub, mul;
  add=a+b;
  sub=a-b;
  mul=a*b;
  
  printf("%d\n", max(add, max(sub, mul)));
  
  return 0;
}