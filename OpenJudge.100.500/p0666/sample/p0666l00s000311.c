#include<stdio.h>
int main(){
  int x,a,b;
  scanf("%d%d%d",&x,&a,&b);
  if(a>=b)puts("delicious");
  else if(x+a>=b)puts("safe");
  else puts("dangerous");
  return 0;
}