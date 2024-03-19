#include <stdio.h>

int main(void)
{

  int Max=0,X=0,Y=0,Z=0;
  
  scanf("%d",&X);
  
  Max=X/500;
  Max=Max*1000;
  
  Y=(X%500)/5;
  Y=Y*5;
  
  Max=Max+Y;
  
  printf("%d",Max);
  
  return 0;
}