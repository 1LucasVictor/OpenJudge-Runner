#pragma GCC optimize("Ofast")
#include<stdio.h>
int main(void)
{
  char buf[400002];
  int i = -1;
  while(1) if(EOF == (buf[++i] = getchar_unlocked())) break;
  int ans = 0;
  i >>= 1;
  char* x = buf + i;
  while(--i) ans += buf[i] != x[i];
  printf("%d", ans);
}
