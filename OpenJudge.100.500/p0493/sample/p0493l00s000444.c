#include <stdio.h>

int main(void) {
  
  int money;
  int i, j;
  
  scanf("%d", &money);
  
  i=money/500;
  j=(money%500)/5;
  
  printf("%d\n", 1000*i+5*j);
  
  return 0;
}
