#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  c=a%2;
  b=a/2;
  if(c==1)b=b+1;
  printf("%d",b);
  return 0;
}
  