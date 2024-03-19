#include <stdio.h>
#include <math.h>
#include <string.h>



int main() {
  long long int a, b, c[20002], i, sum = 0, j, tmp;
  scanf("%lld %lld", &a, &b);

  for ( i = 0; i < b; i++) {
    scanf("%lld", &c[i]);
  }
  /* 数値を降順にソート */
    for (i=0; i<b; ++i) {
      for (j=i+1; j<b; ++j) {
        if (c[i] < c[j]) {
          tmp =  c[i];
          c[i] = c[j];
          c[j] = tmp;
        }
      }
    }

  sum = c[0] + c[1];
  if(a - sum <= 0)
  printf("Yes\n");
  else
  printf("No");

  return 0;
}
