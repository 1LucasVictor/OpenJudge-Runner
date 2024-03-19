#include <stdio.h>
int main(void)
{
  int n, m, i, j, k;
  int hoge[100][100] = {};
  int foo[100] = {};
  int res[100] = {};
  scanf("%d%d", &n, &m);
  for ( i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &hoge[i][j]);
    }
  }
  for (i = 0; i < m; i++) {
    scanf("%d", &foo[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      res[i] += hoge[i][j]*foo[j];
    }
    printf("%d\n", res[i]);
  }
  return 0;
}