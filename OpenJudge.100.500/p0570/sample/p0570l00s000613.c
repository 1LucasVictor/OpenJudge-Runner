#include <stdio.h>
int main(){
  int a,b,x;
  scanf("%d%d",&a,&b);
  x = a+b;
  if(x%2 == 0)printf("%d",x/2);
  else printf("IMPOSSIBLE");
}