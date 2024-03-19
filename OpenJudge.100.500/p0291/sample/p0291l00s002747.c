#include <stdio.h>
#include <limits.h>

#define MAX_LENGTH 200000
int main(void) {
  long n;  //n個の整数を入力
  long maxProfit = LONG_MIN;  //利益の最大値
  long a[MAX_LENGTH];  //時間ごとの価格
  long max = LONG_MIN;
  int i, j, start = 0;

  scanf("%ld", &n);
  if(!(2 <= n && n <= 200000))
    return 0;

  //for (i = 0; i < n; i++)
  //  a[i] = LONG_MIN;

  for (i = 0; i < n; i++){
    scanf("%ld", &a[i]);

    if(max < a[i]) {
      start = i;
      max = a[i];
    }

    if (!(1 <= a[i] && a[i] <= 1000000000))
      return 0;
  }

  for (i = start + 1; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      maxProfit = (maxProfit < a[j] - a[i]) ? a[j] - a[i] : maxProfit;
    }
  }

  /*
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      maxProfit = (maxProfit < a[j] - a[i]) ? a[j] - a[i] : maxProfit;
    }
  }
  */
  printf("%ld\n", maxProfit);

  return 0;
}