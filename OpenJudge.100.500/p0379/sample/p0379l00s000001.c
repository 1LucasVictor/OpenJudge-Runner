#include<stdio.h>

int main()
{
  int n, m, i, j, a[100][100], b[100];
  int c = 0, d = 0;

  scanf("%d%d", &n, &m);

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(i = 0; i < m; i++){
    scanf("%d", &b[i]);
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      c = a[i][j] * b[j];
      d += c;
    }
    printf("%d\n", d);
    c = 0;
    d = 0;
  }
  return 0;
}