#include <stdio.h>

int main(){
  int x, a, b;
  scanf("%d%d%d", &x, &a, &b);
  if(b<=x)
    printf("delicious\n");
  else if(x+a>=b)
    printf("safe\n");
  else
    printf("dangerous\n");

  return 0;
}
