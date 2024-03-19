#include <stdio.h>
int main(void)
{
  int i;
  char s[4];
  char c;

  // 標準入力からの値取得
  scanf("%s\n", s);

  // 計算
  c = s[0];
  for (i = 0; s[i] != '\0'; i++) {
    if (c != s[i]) {
      break;
    }
  }

  // 出力
  if (i != 4)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}