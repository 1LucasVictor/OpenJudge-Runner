#include <stdio.h>
#define K 100

int main()
{
  int i, j, n, x[K][K], sum=0, count=0, a=0, min=0, secondmin=0;

  scanf("%d", &n);

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      scanf("%d", &x[i][j]);
      if(x[i][j] == -1)
        x[i][j] = 2001;
    }
  }

  i = 0;

  min = 2001;

  while(1) {
    for(j=0; j<n; j++) {
      if(x[i][j]<min) {
        secondmin = min;
        min = x[i][j];
        a = j;
      }
    }
    x[i][a] = 2001;
    x[a][i] = 2001;
    i = a;
    sum += min;
    count++;
    if(count == n) break;
  }

  printf("%d\n", sum);

  return 0;
}