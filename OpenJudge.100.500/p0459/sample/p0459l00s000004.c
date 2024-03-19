#include <stdio.h>

int main(void)
{
  int A,B;
  int X,Y;
  scanf("%d %d",&X,&Y);
  A = (4*X-Y)%2;
  B = (-2*X+Y)%2;
  if (A || B) printf("No");
  else printf("Yes");
  printf("\n");
  return 0;
}