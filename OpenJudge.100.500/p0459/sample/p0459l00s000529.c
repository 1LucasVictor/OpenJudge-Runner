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
  ll    x;
  ll    y; 
  answer = 0;
  scan = scanf("%lld", &x);
  scan = scanf("%lld", &y);

  /* プログラムを書く */
  for (ll i = 0; i <= x; i++) {
    if (y == (2 * i + 4 * (x - i))) {
        printf("Yes");
        return (0);
    }
  }
  printf("No");
  return (0);
}

