#include <stdio.h>

int main(int argc, char const *argv[]) {
  int D, N;
  //入力
  scanf("%d%d", &D, &N );
  //計算
  int ans = 1;
  for (size_t i = 0; i <= D; i++) {
    ans = ans*100;
  }
  ans = (ans/100)*N;
  //出力
  printf("%d\n", ans );
  return 0;
}
