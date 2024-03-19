#include <stdio.h>

int main()
{
  int N;
  long int D;
  scanf("%d%ld", &N, &D);
  
  long int x[N], y[N], d;
  int i, count = 0;
  for (i = 0;i < N;i ++) {
    scanf("%ld%ld", &x[i], &y[i]);
    d = x[i] * x[i] + y[i] * y[i];
    if (d <= D*D) {
      count ++;
    }
  }
  
  printf("%d", count);
  return 0;
}
    
