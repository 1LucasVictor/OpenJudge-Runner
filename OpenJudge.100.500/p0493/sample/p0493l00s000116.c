#include <stdio.h>
 
int main(void) {
  int x,n,m;
  unsigned int Ans;
  scanf("%d", &x);
  n = x % 500;
  m = n % 5;
  Ans = (x-n)*2+(n-m);
  printf("%u", Ans);
  return 0;
}