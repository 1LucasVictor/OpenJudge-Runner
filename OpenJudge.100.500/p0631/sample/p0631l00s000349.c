#include <stdio.h>
int main(void){
  int a, b, x;
  scanf("%d%d%d", &a, &b, &x);
  printf("%s\n", (a <= x && a + b >= x) ? "YES" : "NO");  
  return 0;
}