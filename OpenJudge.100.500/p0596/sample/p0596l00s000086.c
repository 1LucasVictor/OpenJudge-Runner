#include <stdio.h>
#include <string.h>
#define min(a, b) ((a) < (b)) ? (a) : (b)
#define max(a, b) ((a) > (b)) ? (a) : (b)

int main(int argc, const char *argv[])
{
  char s[100001];
  int zero = 0, one = 0;
  scanf("%s", s);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == '0') zero++;
    if (s[i] == '1') one++;
  }
  int ans;
  if (zero == 0 || one == 0)
    ans = 0;
  else
    ans = min(zero, one);
  printf("%d\n", ans * 2);

  return 0;
}