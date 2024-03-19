#include <stdio.h>

int main(void)
{
  int n;
  int m;
  int s[5];
  int c[5];
  int arr[3] = {0, 0, 0};
  int i, j;
  int result;
  // input
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++) {
    scanf("%d %d", &s[i], &c[i]);
  }

  // 条件に矛盾がないか確認する、矛盾があれば-1で終了
  for (i = 0; i < m; i++) {
    for (j = i; j < m; j++) {
      if (s[i] == s[j]) {
        if (c[i] != c[j]) {
          printf("%d\n", -1);
          return 0;
        }
      }
    }
  }

  // 条件を配列にいれる
  for (i = 0; i < m; i++) {
    arr[3-s[i]] = c[i];
  }

  // 1桁以外の場合は検査する。最上位の桁が0の場合は-1で終了
  if ((n == 2 && arr[2] == 0) || (n == 3 && arr[2] == 0)) {
    printf("%d\n", -1);
    return 0;
  }
  // 結果計算
  if (n == 1) {
    result = arr[2];
  } else if (n == 2) {
    result = arr[2] * 10 + arr[1];
  } else {
    result = arr[2] * 100 + arr[1] * 10 + arr[0];
  }
  
  printf("%d\n", result);
  return 0;

}