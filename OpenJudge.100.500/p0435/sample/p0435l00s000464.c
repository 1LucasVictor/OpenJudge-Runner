#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int N, D, X, Y, i, cnt = 0;

  if (scanf("%d %d", &N, &D) == 1)
    ;

  double dist;

  for (i = 0; i < N; i++)
  {
    if (scanf("%d %d", &X, &Y) == 1)
      ;
    dist = sqrt(pow((double)X, 2.0) + pow((double)Y, 2.0));
    if (dist <= (double)D)
    {
      cnt++;
    }
  }

  printf("%d", cnt);

  return (0);
}
