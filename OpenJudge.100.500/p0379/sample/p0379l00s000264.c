#include <stdio.h>
int main(void)
{
  int n, m, i, j, k;
  int hoge[101][101] = {};
  scanf("%d%d", &n, &m);
  for ( i = 0; i < n; i++) {
    for (j = 1; j <= m; j++) {
      scanf("%d", &hoge[i][j]);
      hoge[i][0] += hoge[i][j];
    }
  }
  for (i = 0; i < n; i++) {
    scanf("%d", &k);
    hoge[i][0] += k;
  }
  for (i = 0; i < n; i++) {
    printf("%d\n", hoge[i][0]);
  }
  return 0;
}