#include <stdio.h>

int main()
{
  int n, x, min, max;
  long sum=0;
  scanf("%d\n", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &x);
    if (i==0 || x<min) min=x;
    if (i==0 || x>max) max=x;
    sum += x;
  }
  printf("%d %d %ld\n", min, max, sum);
  return 0;
}
