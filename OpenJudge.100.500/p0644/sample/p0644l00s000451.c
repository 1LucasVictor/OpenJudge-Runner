#include <stdio.h>

int main(void){
  int s, ans;

  scanf("%d", &s);

  ans = 0;
  while (s > 0) {
    if (s % 10 == 1) {
      ans++;
    }
    s = s / 10;
  }

  printf("%d\n", ans);

  return 0;
}