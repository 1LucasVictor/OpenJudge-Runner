#include <stdio.h>

int
main (void)
{
  int n;
  scanf ("%d", &n);
  n %= 10;
  
  if (n == 0 || n == 1 || n == 6 || n == 8)
    puts ("pon");
  else if (n == 3)
    puts ("bon");
  else
    puts ("hon");
      
  return 0;
}