#include <stdio.h>

int main(void)

{
  int A,H,i;

  scanf("%d%d",&H,&A);
  for(i=0;0<H;i++) H=H-A;
  printf("%d\n",i);
  return 0;
}