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
  
  if (y < 2 * x) {
    // 全て亀と仮定したときよりも足の数が少ないのは不可
    puts("No\n");
    return 0;
  }
  
  // 足の数が偶数で多すぎず少なすぎなければ可
  puts("Yes\n");
  return 0;
}