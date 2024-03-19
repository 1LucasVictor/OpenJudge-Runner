#include<stdio.h>
int main()
{
  int x=0;
  int a=0;
  scanf("%d%d",&x,&a);
  if(x>a||x==a)
  {
    printf("10");
  }else if(x<a)
  {
    printf("0");
  }
return 0;
}