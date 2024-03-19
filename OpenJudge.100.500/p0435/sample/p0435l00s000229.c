#include <stdio.h>

int distance(int x, int y) {
  int d = x*x + y*y;
  return d;
}

int main()
{
  int N, D, i, x, y, d, count = 0;
  scanf("%d%d", &N, &D);
  
  for (i = 0;i < N;i ++) {
    scanf("%d%d", &x, &y);
    d = distance(x, y);
    if (d <= D*D) {
      count ++;
    }
  }
  
  printf("%d", count);
  return 0;
}
  
