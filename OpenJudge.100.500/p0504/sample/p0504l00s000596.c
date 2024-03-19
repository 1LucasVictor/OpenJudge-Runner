#include <stdio.h>

int main()
{
  int H,A,m,n;
  scanf("%d %d",&H,&A);
  m = H / A;
  n = H % A;
  if (n > 0)
  {
    printf("%d",m+1);
    return(0);
  }
  printf("%d",m);
}