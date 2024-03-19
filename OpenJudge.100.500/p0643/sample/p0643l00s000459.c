#include <stdio.h>
 
int main() {
  int a,b;
  
  scanf("%d %d", &a, &b);
  
  // 計算結果が 1 の場合 Even
  // 計算結果が 0 の場合 Odd
  printf("%s\n", (a * b) % 2? "Odd" : "Even");
  
 
  return 0;
}