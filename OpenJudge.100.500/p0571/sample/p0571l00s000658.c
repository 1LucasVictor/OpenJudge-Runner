#include <stdio.h>

int main()
{
  int n, a, b;
  int min;
  
  scanf("%d %d %d",&n,&a,&b);
  
  min=n*a;
  
  if(min>b)
    min=b;
  
  printf("%d\n",min);
  
  return 0;
}