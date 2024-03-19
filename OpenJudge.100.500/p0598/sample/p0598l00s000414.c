#include<stdio.h>

int main(void)
{
int a,b,res;

scanf("%d %d",&a,&b);

if(b%a==0)
{
  res = a + b;
}
else
{
  res = b - a;
}

printf("%d",res);

  return 0;
}