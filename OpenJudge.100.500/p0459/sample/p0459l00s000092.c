#include <stdio.h>
 
int main(void)
{
  int A,B;
  int X,Y;
  scanf("%d %d",&X,&Y);
  A = (4*X-Y);
  B = (-2*X+Y);
  if (A < 0 || B < 0) printf("No");
  else if (A%2 || B%2) printf("No");
  else printf("Yes");
  printf("\n");
  return 0;
}
