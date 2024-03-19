#include <stdio.h>
#include <string.h>
int main() {
  char s[100001];
  scanf("%s", s);
  int n = strlen(s);
  int i, cnt_0 = 0;
  for (i = 0; i < n; i++) {
    if (s[i] == '0'){
      cnt_0 ++;
    }
  }
  int cnt_1 = n - cnt_0;
  int cnt = cnt_1 < cnt_0 ? cnt_1 : cnt_0;
  printf("%d\n", cnt << 1);
  return 0;
}