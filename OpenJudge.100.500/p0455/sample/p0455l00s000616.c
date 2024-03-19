#include <stdio.h>
int ans(int a){
  int i;
  i = a + a*a + a*a*a;
  return i;
}
int main(void){
  int a;
  scanf("%d", &a);
  printf("%d", ans(a));
  return 0;
}