#include <stdio.h>

int main() {
  int n, m, l, y, x, ns1[100][100], ns2[100][100], im, a;
  scanf("%d%d%d", &n, &m, &l);
  for(y = 0; y < n; ++y) for(x = 0; x < m; ++x) scanf("%d", &ns1[y][x]);
  for(y = 0; y < m; ++y) for(x = 0; x < l; ++x) scanf("%d", &ns2[y][x]);
  for(y = 0; y < n; ++y) for(x = 0; x < l; ++x) {
    a = 0;
    for(im = 0; im < m; ++im) a += ns1[y][im] * ns2[im][x];
    printf("%d%s", a, (x == l - 1 ? "\n" : " "));
  }
  return 0;
}