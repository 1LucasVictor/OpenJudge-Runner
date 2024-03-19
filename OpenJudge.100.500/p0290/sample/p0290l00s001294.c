#include <stdio.h>
#include <limits.h>

#define MAX_NUM 10000   //与えられる整数の個数の最大値
#define MAX_PRIME 10e8  //与えられる整数の最大値

int main(void) {
  int n;            //与えられる整数の個数
  long num[MAX_NUM]; //与えられた整数を格納
  int cnt;      //素数の個数
  int i, j, k;

  scanf("%d", &n);
  cnt = n;

  for (i = 0; i < n; i++)
    scanf("%ld", &num[i]);

  for (i = 0; i < n; i++) {
    for (j = 2; j < num[i]; j++) {
      if(num[i] % j == 0) {
        cnt--;
        break;
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}