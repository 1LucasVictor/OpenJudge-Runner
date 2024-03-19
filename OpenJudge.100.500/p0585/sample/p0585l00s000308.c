#include <stdio.h>
#include <string.h>
int main(){
  int a, b, t;
  int tmp = 0;

  scanf("%d%d%d", &a, &b, &t);

  tmp = (t+0.5) / a;
  printf("%d\n", tmp * b);
  
}
