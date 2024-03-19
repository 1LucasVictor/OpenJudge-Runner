#include <stdio.h>

int main(void)
{
  int n;
  int ans[50];

  scanf("%d", &n);

  ans[0] = 1;
  ans[1] = 1;

  for(int i = 2; i <= n; i++) {
    ans[i] = ans[i-1] + ans[i-2];
  }

  printf("%d\n", ans[n]);

  return 0;
}