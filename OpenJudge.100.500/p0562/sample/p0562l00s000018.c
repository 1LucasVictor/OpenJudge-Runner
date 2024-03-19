#include <stdio.h>

int main(void)
{
  int a, b;
  
  scanf("%d %d", &a, &b);
  
  if (b == 1)
    puts('0');
  else
    printf("%d\n", (b-2)/(a-1)+1);
  
  return 0;
}