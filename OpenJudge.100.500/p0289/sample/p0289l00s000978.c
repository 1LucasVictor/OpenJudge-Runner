#include <stdio.h>

int main() {
  int a, b, r, tmp;
  
  scanf("%d%d", &a, &b);
  if(a < b) {
    tmp = a;
    a = b;
    b = tmp;
  }
  
  while(a % b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  printf("%d\n", b);
  
  return 0;
}