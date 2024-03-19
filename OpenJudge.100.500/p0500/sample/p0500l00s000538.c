#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n, m, i, s, c, digit[3] = {-2, -2, -2};
  scanf("%d %d", &n, &m);    // n桁,条件m個
  for (i = m; i > 0; i--) {  // m個の条件を確認
    scanf("%d %d", &s, &c);
    if (digit[2 - n + s] == -2) {  //初の条件は採用
      digit[2 - n + s] = c;
    } else if (digit[2 - n + s] != c) {  //同じ行に別条件がある場合は死ぬ
      printf("-1\n");
      exit(0);
    }
  }
  //一桁目が0だと死ぬ,条件なければ1,あればそれ
  if (n == 1 && (digit[2] == 0 || digit[2] == -2)) {
    printf("0\n");
    exit(0);
  }
  if (digit[3 - n] == 0) {
    printf("-1\n");
    exit(0);
  } else if (digit[3 - n] == -2)
    printf("1");
  else
    printf("%d", digit[3 - n]);
  //条件の無い行は0
  for (i = 4 - n; i < 3; i++) {
    if (digit[i] == -2)
      printf("0");
    else
      printf("%d", digit[i]);
  }
  printf("\n");
  return 0;
}