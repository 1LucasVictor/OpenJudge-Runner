#include <stdio.h>

int main() {
  // 変数の宣言
  int a, b;
  // 入力値を受け取り, a, b に格納する.
  scanf("%d %d", &a, &b);

  if (b % a == 0) {
    printf("%d\n", a+b);
  }

  return 0;
}