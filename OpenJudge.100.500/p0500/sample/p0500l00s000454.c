#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int ans[3] = {-1, -1, -1};
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    int s, c;
    scanf("%d %d", &s, &c);
    if (ans[s - 1] != -1 && ans[s - 1] != c) {
      printf("-1\n");
      return 0;
    }
    ans[s - 1] = c;
  }
  if (n > 1 && ans[0] == 0) {
    printf("-1\n");
    return 0;
  }
  if (n > 1 && ans[0] == -1)
    ans[0] = 1;
  for (int i = 0; i < n; i++) {
    printf("%d", ans[i] == -1 ? 0 : ans[i]);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
