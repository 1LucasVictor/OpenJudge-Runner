#include <stdio.h>
int main(void) {
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  printf("%s\n",(a+b<x)?"NO":"YES");
  return 0;
}