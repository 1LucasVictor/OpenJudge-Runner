#include <stdio.h>

int main()
{
  int x,happy=0;
  scanf("%d",&x);
  happy += 1000*(x/500);
  happy += 5*((x%500)/5);
  printf("%d",happy);
  return 0;
}
