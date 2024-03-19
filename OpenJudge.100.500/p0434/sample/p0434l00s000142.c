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
  ll    answer;
  ll    n;
  answer = 0;
  scan = scanf("%lld", &n);

  /* プログラムを書く */
  if (n >= 30) {
    printf("Yes");
  } else {
    printf("No");
  }

  return (0);
}

