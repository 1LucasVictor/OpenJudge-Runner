#include <stdio.h>
int main(){
  int a,b,x;
  scanf("%d %d %d",&x,&a,&b);
  if(a>=b)puts("delicious");
  else (b-a<=x)?puts("safe"):puts("dengerous");
  return 0;
}