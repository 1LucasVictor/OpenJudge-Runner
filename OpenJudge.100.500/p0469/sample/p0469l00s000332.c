#include <stdio.h>

int main()
{
 int k,a,b;
  
  scanf("%d%d%d",&k,&a,&b);
  
  int i;
  
  for(i=1;i<=b;i++)
  {
    if(a<=k*i&&k*i<=b)
    {
      printf("OK\n");
      return 0;
    }
  }
  
  printf("NG\n");
  return 0;
}