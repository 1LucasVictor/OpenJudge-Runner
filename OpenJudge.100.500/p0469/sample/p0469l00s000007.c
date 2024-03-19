#include <stdio.h>

int main()
{
  int k, a, b, i;
  int dif;
  
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  
  i = 0;
  while(i < (b - a))
  {
    if ((a + i) % k == 0)
    {
      printf("OK");
      return(0);
    }
    i++;
  }
  printf("NG");
  return(0);
}