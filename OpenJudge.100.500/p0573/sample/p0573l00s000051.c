#include <stdio.h>

int main(void)
{
  int c[26] = {};
  char s[4 + 1];
  scanf("%4s", s);
  for (int i = 0; i < 4; i++) {
    c[s[i] - 'A']++;
  }
  char *ans = "Yes";
  for (int i = 0; i < 26; i++) {
    if (c[i] != 0 && c[i] != 2) {
      ans = "No";
    }
  }
  puts(ans);
}
