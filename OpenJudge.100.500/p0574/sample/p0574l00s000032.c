#include <stdio.h>

int main(void)
{
  int n;
  int x[4];
  int i = 0;
  
  while((x[i++] = getchar()) != EOF)
    ;
  
  if (x[0] == x[1] || x[1] == x[2] || x[2] == x[3])
    puts("Bad");
  else
    puts("Good");
  
  return 0;
}
