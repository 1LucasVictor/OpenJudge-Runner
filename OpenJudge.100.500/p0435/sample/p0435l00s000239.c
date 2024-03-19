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
  ll    d; 
  ll    *x;
  ll    *y;
  answer = 0;
  scan = scanf("%lld", &n);
  scan = scanf("%lld", &d);
  x = (ll *)malloc(sizeof(ll) * n);
  y = (ll *)malloc(sizeof(ll) * n);

  for (ll i = 0; i < n; i++) {
    scan = scanf("%lld", &x[i]);
    scan = scanf("%lld", &y[i]);
  } 

  /* プログラムを書く */
  for (ll i = 0; i < n; i++) {
    if (x[i] * x[i] + y[i] * y[i] <= d * d) {
      answer += 1;
    }
  } 

  /* 数回答 */
  printf("%lld", answer);

  return (0);
}

