#include <stdio.h>

int main(){
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  int ans = n * a;
  if(ans > b){
    ans = b;
  }
  printf("%d\n", ans);
  return 0;
}
