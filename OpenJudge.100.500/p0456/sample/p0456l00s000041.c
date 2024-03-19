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

  /* 文入力 */
  char  *s;
  char  *t;
  s = (char *)malloc(sizeof(char) * 200001);
  t = (char *)malloc(sizeof(char) * 200001);
  scan = scanf("%s", s);
  scan = scanf("%s", t);
 
  /* プログラムを書く */
  int   n;
  int   result;
  
  n = 0;
  result = 0;
  while (s[n] != '\0')
  {
    if (s[n] != t[n])
    {
      s[n] = t[n];
      result++;
    }
    n++;
  }

  /* 数回答 */
  printf("%d", result);


  return (0);
}

