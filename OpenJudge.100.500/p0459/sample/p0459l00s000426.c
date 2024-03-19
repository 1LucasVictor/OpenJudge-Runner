#include<stdio.h>

int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  
  if (y % 2 != 0) {
    // 足の数が奇数なら不可
    puts("No\n");
    return 0;
  }
  
  if (y > 4 * x) {
    // 全て鶴と仮定したときよりも足の数が多いのは不可
    puts("No\n");
    return 0;
  }
  
  if (y / 4 == x) {
    // 全て鶴にすることで可
    puts("Yes\n");
    return 0;
  }
  
  // 亀がx匹いると仮定し、足の数がそれより多ければ(4 - 2)で割り切れるかどうかで判定する
  int allTortoiseLegCount = 2 * x;
  int rest = y - allTortoiseLegCount;
  
  if (rest == 0) {
    // 全て亀にすることで可
    puts("Yes\n");
    return 0;
  }
  
  if (rest % 2 == 0) {
    // 鶴を(rest / 2)羽にすることで可
    puts("Yes\n");
    return 0;
  }
  
  // 不可
  puts("No\n");
  
  return 0;
}