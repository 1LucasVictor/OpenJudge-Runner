#include<stdio.h>
int main(){
  int a, b, c, ans;
  scanf("%d %d %d", &a, &b, &c);
  ans = c - (a - b);
  if(ans <= 0) puts("0");
  else printf("%d\n", ans);
  return 0;
}