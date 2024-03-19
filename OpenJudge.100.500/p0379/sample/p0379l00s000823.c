#include <stdio.h>

int main(void)
{
  int n = 0;
  int m = 0;
  int a[100][100];
  int b[100][1];
  int i, j;
  int sum = 0;
  
  scanf("%d %d", &n, &m);

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++)
      scanf("%d ", &a[i][j]);
    putchar('\n');
  }

  for(i = 0; i < m; i++)
    scanf("%d ", &b[0][i]);
    
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++)
      sum += a[i][j] * b[j][0];

    printf("%d\n", sum);

    sum = 0;
  }

  return 0;
}