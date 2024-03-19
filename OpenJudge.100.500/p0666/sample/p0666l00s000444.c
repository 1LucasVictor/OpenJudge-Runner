#include <stdio.h>
int main(){
  int a,b,x;
  scanf("%d %d %d",&x,&a,&b);
  if(a>=b)puts("delicious");
  else if(b-a<=x)puts("safe");
  else puts("dengerous");
  return 0;
}