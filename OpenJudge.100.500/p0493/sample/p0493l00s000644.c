#include <stdio.h>
 
int main(void)
{
  int X, i, j, output;
  
  scanf("%d", &X);
  
  i = X / 500;
  X = X % 500;
  j = X / 5;
  X = X % 5;
  
  output = i * 1000 + j * 5;
  
  printf("%d", output);
  
  return 0;
}