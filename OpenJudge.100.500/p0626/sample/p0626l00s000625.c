#include <stdio.h>

int main(){
  int d, n, a=1, i;
  scanf("%d %d", &d, &n);
  for(i=0;i<d;i++) a *= 100;
  if(n==100) n--;
  printf("%d\n", a*n);
  return 0;
}