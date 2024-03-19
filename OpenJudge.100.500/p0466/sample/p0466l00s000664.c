#include <stdio.h>
#include <string.h>
//#include <math.h>
#define MIN(x,y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))
int main() {
  char s[11],t[11];
  scanf("%s", s);
  scanf("%s", t);
  int slen = strlen(s);
  int tlen = strlen(t);
  if (slen + 1 != tlen) {
    printf("No");
    return 0;
  }
  for (int i = 0; i < slen; i++) {
    if (s[i] != t[i]) {
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}