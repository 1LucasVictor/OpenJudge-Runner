#include <stdio.h>

int main(void){
  int n,m;
  scanf("%d", &n);
  if(n%2 == 1)
    m = (n + 1)/2;
  else
    m = n/2;
  printf("%d", m);
  return 0;
}