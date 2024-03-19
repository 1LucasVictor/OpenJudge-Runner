#include <stdio.h>
//#include <math.h>
#define MIN(x,y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))
int main() {
  char s[4];
  scanf("%s", s);
  if (s[1] == 'B') {
    printf("ARC");
  } else {
    printf("ABC");
  }
  return 0;
}