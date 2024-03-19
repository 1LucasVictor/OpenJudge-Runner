#include<stdio.h>
 
int cal(int a);
 
int main(void)
{
  int a;
  int cal_out;
  scanf("%d",&a);
  cal_out = cal(a);
  printf("%d\n",cal_out);
  return 0;
}
 
int cal(int a)
{
  int res;
  res = a+a*a+a*a*a;
  return res;
}