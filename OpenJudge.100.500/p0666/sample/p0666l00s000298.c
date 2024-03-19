#include <stdio.h>
int main(void){
  long int x,a,b;
  scanf("%ld%ld%ld",&x,&a,&b);
  if(a >= b) puts("delicious");
  else if(a + x >= b) puts("safe");
  else puts("dangerous");
  return 0;
}