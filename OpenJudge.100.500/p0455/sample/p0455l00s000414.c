#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a>=1&&a<=10)
    printf("%d",a+a*a+a*a*a);
  return 0;
}