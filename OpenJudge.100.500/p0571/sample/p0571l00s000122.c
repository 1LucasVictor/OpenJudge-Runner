#include <stdio.h>

int main(void){
  int a, b, n, m;
  scanf("%d %d %d", &n, &a, &b);
  
  m = n * a;
  
  if (m < b)
    printf("%d", m);
  else
    printf("%d", b);
  
  return 0;
}