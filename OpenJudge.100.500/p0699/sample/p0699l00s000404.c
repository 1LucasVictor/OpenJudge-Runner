#include <stdio.h>
int main()
{
  int a[3];
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  int i = 0;
  if ((a[0] == 7 && a[1] == 5 && a[2] == 5) || (a[0] == 5 && a[1] == 7 && a[2] == 5) || (a[0] == 5 && a[1] == 5 && a[2] == 7))
  {
    printf("YES");
  }
  else
    printf("NO");
}