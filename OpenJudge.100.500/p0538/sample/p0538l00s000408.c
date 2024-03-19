#include<stdio.h>

int main(void) {
  int a, b;
  
  scanf("%d", &a);  scanf("%d", &b);
  
  if(a >= 10||b >= 10) {
    puts("-1");
  }
  else {
    printf("%d", a * b);
  }
  return 0;
}