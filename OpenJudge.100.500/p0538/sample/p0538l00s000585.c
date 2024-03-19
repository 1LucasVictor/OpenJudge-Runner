#include <stdio.h>

int main()
{
  int a, b;
  
  scanf("%d %d",&a,&b);
  
  if(a>9 || b>9)
    a=-1;
  else
    a*=b;
  
  printf("%d\n",a);
  
  return 0;
}