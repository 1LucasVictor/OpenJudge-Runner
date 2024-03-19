#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 10min
int main(void){
  int n;
  int a, b;
  int ans = 0;
  
  scanf("%d%d%d", &n, &a, &b);
  ans = n*a;
  if(ans > b){
    ans = b;
  }
  
  printf("%d\n", ans);

  return 0;
}