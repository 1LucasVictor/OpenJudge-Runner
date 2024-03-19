#include <stdio.h>
int main(void){
  int a,x=0;
  scanf("%d",&a);
  x = a + (a*a) + (a*a*a);
  printf("%d",x);
  return 0;
}