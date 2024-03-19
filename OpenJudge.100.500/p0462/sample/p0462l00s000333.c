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
  ull       answer;
  ull       a;
  ld        b; 
  answer = 0;
  scan = scanf("%llu", &a);
  scan = scanf("%Lf", &b);

  /* プログラムを書く */
  ull        bint;

  bint = (ull)round(100 * b); 
   
  answer = a * bint;
  answer = answer / 100;


  /* 数回答 */
  printf("%llu", answer);

  return (0);
}
