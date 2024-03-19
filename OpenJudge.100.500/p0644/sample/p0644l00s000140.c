#include<stdio.h>

int main() {
  char s[3];
  int ans = 0;
  scanf("%s", s);
  for(int i = 0; i < 3; i++) ans += s[i] == '1';
  printf("%d", ans);
}
