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
  ll    n;
  ll    m;
  ll    k; 
  ll    *a;
  ll    *b;
  scan = scanf("%lld", &n);
  scan = scanf("%lld", &m);
  scan = scanf("%lld", &k);
  a = (ll *)malloc(sizeof(ll) * n);
  b = (ll *)malloc(sizeof(ll) * m);
  for (ll i = 0; i < n; i++) {
    scan = scanf("%lld", &a[i]);
  }
  for (ll j = 0; j < m; j++) {
    scan = scanf("%lld", &b[j]);
  }
 
  /* プログラムを書く */
  ll    minutes;
  ll    count;
  ll    pa;
  ll    pb;

  minutes = 0;
  count = 0;
  pa = 0;
  pb = 0;
  while (minutes <= k)
  {
    if (a[pa] <= b[pb] && a[pa] != 0) {
      //printf("Read: a[%lld] / minutes: + %lld\n", pa, a[pa]);
      minutes += a[pa];
      pa++; 
      if (minutes <= k) {
        count++;
      } else {
        break;
      }
    } else if (b[pb] != 0) {
      //printf("Read: b[%lld] / minutes: + %lld\n", pb, b[pb]);
      minutes += b[pb];
      pb++;
      if (minutes <= k) {
        count++;
      } else {
        break;
      }
    }
    if (a[pa] == 0 && b[pb] == 0) {
      break;
    }
  } 

  /* 数回答 */
  printf("%lld", count);

  return (0);
}

