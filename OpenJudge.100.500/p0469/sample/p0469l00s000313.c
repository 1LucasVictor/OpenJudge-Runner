#include <stdio.h>

int main()
{
  int k,a,b;
  scanf("%d%d%d",&k,&a,&b);
  int i;
  i = 0;
  int ans;
  while (i < 1000)
  {
    if (i >= a && i <= b && i % k == 0)
    {
      printf("OK");
      return (0);
    }
    i++;
  }
  printf("NG");
  
}