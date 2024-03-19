#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI acos(-1)
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;

int main(void) {
  /* 標準入力フラグ */
  int   scan;

  /* 数入力 */
  ld        answer;
  ll        a;
  ld        b; 
  answer = 0;
  scan = scanf("%lld", &a);
  scan = scanf("%Lf", &b);

  /* プログラムを書く */
  answer = floor(a * b);
  












  /* 数回答 */
  printf("%.0Lf", answer);

  return (0);
}
