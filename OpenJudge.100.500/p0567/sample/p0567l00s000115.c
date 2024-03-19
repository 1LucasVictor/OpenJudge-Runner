#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int ans = c - (a - b);
  if(ans < 0){
    ans = 0;
  }
  printf("%d\n", ans);
  return 0;
}
