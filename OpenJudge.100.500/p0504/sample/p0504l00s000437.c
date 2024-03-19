#include <stdio.h>
int main()
{
    int a,b,c=0;
  scanf("%d%d",&a,&b);
  while(a>0)
  {
    a=a-b;
      c++;
  }
  printf("%d",c);
  return 0;
}