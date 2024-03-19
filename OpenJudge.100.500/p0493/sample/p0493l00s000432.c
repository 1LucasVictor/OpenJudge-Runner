#include<stdio.h>
int main(void)
{
int a=0;
int b=0;
  
  scanf("%d",&a);
  while(a>=500)
    {
    b=b+1000;
    a=a-500;
    }
  while(a>=5)
    {
    b=b+5;
    a=a-5;
    }
  printf("%d",b);
  return 0;
}