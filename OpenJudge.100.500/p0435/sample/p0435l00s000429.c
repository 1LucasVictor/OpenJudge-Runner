#include <stdio.h>

int main()
{
  int N, D;
  scanf("%d%d", &N, &D);
  
  int x[N], y[N], i, count = 0;
  long int d;
  for (i = 0;i < N;i ++) {
    scanf("%d%d", &x[i], &y[i]);
    d = x[i] * x[i] + y[i] * y[i];
    if (d <= D*D) {
      count ++;
    }
  }
  
  printf("%d", count);
  return 0;
}
    
