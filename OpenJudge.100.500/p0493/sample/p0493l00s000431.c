#include <stdio.h>

int main(void)
{
  int X;
  int s_500,a_500,s_5,uresii;
  
  scanf("%d",&X);
  
  s_500 = X/500;
  a_500 = X%500;
  s_5 = a_500/5;
  
  uresii = s_500*1000 + s_5*5;
  printf("%d\n",uresii);
  return 0;
}