#include<stdio.h>
int main(void)
{
  int X,Y;
  
  scanf("%d %d",&X,&Y);
  if (Y%2 == 1) printf("No\n");
  else if (2*X >= Y) printf("No\n");
  else if (4*X >= Y) printf("Yes\n");
  else printf("No\n");
  
  return 0;
}