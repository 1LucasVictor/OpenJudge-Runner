#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if((a*b)%2==1)
    printf("Odd");
  else
    printf("Even");
  return 0;
}