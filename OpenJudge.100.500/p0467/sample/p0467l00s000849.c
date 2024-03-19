#include <stdio.h>

int main(void) {
  int a,b,c,k;
  a=0;
  b=0;
  c=0;
  k=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&k);
  c=k-(a+b);
if(k<=a)
{
    printf("%d",k);
}
else if(k<=a+b)
{
    printf("%d",a);
}
else
{
    printf("%d",a-c);
}
  
  return 0;
}