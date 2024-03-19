#include <stdio.h>
int main()
{
  int X;
  if(X >= 30 && X <= 40)
    printf("Yes");
  else if(X >= -40 && X < 30)
    printf("No");
  else
    printf("error");
  return 0;
}