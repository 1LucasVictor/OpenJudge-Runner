#include <stdio.h>

int main()
{
  int X;
  scanf("%d",&X);
  long happy = 0;
  while (X >= 500)
  {
    X -= 500;
    happy += 1000;
  }
  while (X >= 5)
  {
    X -= 5;
    happy += 5;
  }
  printf("%ld",happy);
}