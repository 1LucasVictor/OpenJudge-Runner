#include<stdio.h>
void main()
{
  int X,Y;
  scanf("%d %d",&X,&Y);
  if(Y<=(4*X)&&Y>=(2*X))
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
}