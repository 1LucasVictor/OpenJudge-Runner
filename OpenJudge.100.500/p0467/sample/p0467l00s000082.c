#include <stdio.h>
//#include <math.h>
#define MIN(x,y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))
int main() {
  int a,b,c,k;
  scanf("%d%d%d%d", &a,&b,&c,&k);
  int rest = k;
  if (rest > a) {
    rest -= a;
    if (rest > b) {
      rest -= b;
      printf("%d", a-rest);
    } else {
      printf("%d", a);
    }
  } else {
    printf("%d", rest);
  }
  return 0;
}