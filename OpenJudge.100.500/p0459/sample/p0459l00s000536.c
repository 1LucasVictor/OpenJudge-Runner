#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
  int x,y;
  float a,b;
  scanf("%d %d", &x,&y);
  a = 2 * x - y/2;
  b = y/2 -x;

  if(a < 0 || b < 0) {
    printf("No\n");
  } else if( a - ((int)a) > 0 || b - ((int)b) > 0) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  return 0;
}
