#include<stdio.h>
int main()
{
  int a=0;
  int b=0;
  int result=0;
  scanf("%d%d",&a,&b);
  if(b%a==0)
  {
    result=a+b;
  }
  else
  {
    result=b-a;
  }
  printf("%d",result);
  return 0;
}