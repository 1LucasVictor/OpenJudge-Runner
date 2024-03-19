#include <stdio.h>
int main(){
  int a,b,x;
  scanf("%d %d %d",&x,&a,&b);
  if(a>=b)puts("delicious");
  else if(b-a<=x)puts("safe");
  else if(b-a>x)puts("dengerous");
  return 0;
}