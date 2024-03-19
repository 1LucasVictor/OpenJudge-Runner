#include<stdio.h>

int main()
{
  int x,a,b;
  
  scanf("%d%d%d",&x,&a,&b);
  
  a=a*(-1);
  
  if(a+b<=0)
  {
    printf("delicious\n");
  }
  else if(a+b<=x)
  {
    printf("safe\n");
  }
  else if(a+b>=x+1)
  {
    printf("dangerous\n");
  }
  
  return 0;
}
  