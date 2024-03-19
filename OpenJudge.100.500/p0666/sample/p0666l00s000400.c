#include <stdio.h>
int main(void) {
  int x,a,b;
  scanf("%d%d%d",&x,&a,&b);
  printf("%s\n",(b<=a)?"delicious":(-a+b>x)?"dangerous":"safe");
  return 0;
}