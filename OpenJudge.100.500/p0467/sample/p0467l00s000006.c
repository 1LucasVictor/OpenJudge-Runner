#include <stdio.h>
int main(void)
{
  int a,b,c,k;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&k);
  if(a > k)
    printf("%d",k);
  if(a < k < a+b)
    printf("%d",a);
  else
    printf("%d",2*a-k-b);
  
  return 0;
}