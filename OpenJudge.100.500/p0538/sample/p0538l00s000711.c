#include <stdio.h>
int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  
  if (a<10 && b<10)
    printf("%d\n", a*b);
  else
    puts("-1");
  
  return 0;
}