#include<stdio.h>
int main(void)
{
  int a,b,total;
  scanf("%d %d",&a,&b);
  total = a*b;
  if(a>9) total = -1;
  if(b>9) total = -1;
  printf("%d\n",total);
  return 0;
}