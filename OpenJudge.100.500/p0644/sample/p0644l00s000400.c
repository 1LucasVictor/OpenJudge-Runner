#include <stdio.h>

int main(void){
  int a, b, c;
  int num = 0;
  scanf("%d", &a);
  c = a % 10;
  a /= 10;
  b = a % 10;
  a /= 10;
  if(a == 1) num++;
  if(b == 1) num++;
  if(c == 1) num++;
  printf("%d\n", num);

  return 0;
}