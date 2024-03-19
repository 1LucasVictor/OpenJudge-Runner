#include <stdio.h>

int main()
{
  int ret;
  int H, A;

  ret = scanf("%d %d", &H, &A);
  ret = H / A;
  if ( (H % A) != 0 )
    ret++;

  printf("%d\n", ret);
}
