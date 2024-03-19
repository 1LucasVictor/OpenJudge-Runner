#include <stdio.h>

int main(){
  int n, u, k, v, c, list[100][100], s[100], d[100], p[100];
  int i, j, min, min_v;

  for (i = 0; i < 100; i++) {
    d[i] = 999999;
    s[i] = -1;
    for (j = 0; j < 100; j++) {
      list[i][j] = 999999;
    }
  }

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d %d", &v, &c);
      list[u][v] = c;
    }
  }

  d[0] = 0;

  for (j = 0; j < n; j++){
    min = 1000000;
    for (i = 0; i < n; i++) {
      if (min > d[i] && s[i] != 1) {
        min = d[i];
        min_v = i;
      }
    }

    s[min_v] = 1;
    for (i = 0; i < n; i++) {
      if (d[min_v]+list[min_v][i]<d[i] && s[i]!=1){
        d[i] = d[min_v] + list[min_v][i];
        p[min_v] = i;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}

