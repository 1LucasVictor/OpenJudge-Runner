#include<stdio.h>
int main()
{
  int X;
  int hs=0;
  int fh,f;
  scanf("%d",&X);
  fh = X/500;
  hs += fh*1000;
  X -= fh*500;
  hs += X/5 * 5 ;
  printf("%d",hs);
  return 0; 
}