#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
  int x,y;
  int a,b;
  scanf("%d %d", &x,&y);
  a = 2 * x - y/2;
  b = y/2 -x;

  if(a < 0 || b < 0) {
    printf("No\n");
  } else if( x != a + b|| 2 * a + 4 *b != y) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  return 0;
}
