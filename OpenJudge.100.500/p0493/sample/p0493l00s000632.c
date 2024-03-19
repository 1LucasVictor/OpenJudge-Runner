#include<stdio.h>

int main()
{
  int x;
  int a,b,c;
  scanf("%d",&x);
  a=x/500;
  b=(x-a*500)/5;
  c=a*1000 + b*5;
  printf("%d\n",c);

  return 0;
  
}