#include <stdio.h>

int main()
{
  int a[4];
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  a[1] *= -1;
  if (a[1] + a[2] <= 0)
    printf("delicious");
  else if (a[1] + a[2] > a[0])
    printf("dangerous");
  else
    printf("safe");
}