#include <stdio.h>

int main(void){
  int a, b;
  int c, ans=0;
  while(scanf("%d %d", &a, &b) != EOF){
    c = a + b;
    if(c==0){
      ans = 1;
    }else {
      while(c > 0){
        ans++;
        c = c / 10;
      }
    }
    printf("%d\n", ans);
    ans = 0;
  }
  return 0;
}