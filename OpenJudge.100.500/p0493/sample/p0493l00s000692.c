#include <stdio.h>
int main(){
  int x, p = 0;
  scanf("%d", &x);
  p += (int)(x / 500) * 1000;
  x -= p / 2;
  p += (int)(x / 5) * 5;
  
  printf("%d\n", p);
}
